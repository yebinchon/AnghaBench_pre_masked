
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_hdr {int len; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct msg_hdr*,int ,int) ;
 int FUNC_3 (int,struct msg_hdr*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*,int,int ) ;

__attribute__((used)) static int FUNC_7(int VAR_4)
{
 struct msg_hdr VAR_5;
 int VAR_6;

 FUNC_5("closing...");
 FUNC_1(((void*)0));
 FUNC_2(&VAR_5, 0, sizeof VAR_5);
 VAR_5.command = VAR_0;
 VAR_5.len = sizeof VAR_5;
 VAR_6 = FUNC_6(VAR_4, (char *) &VAR_5, VAR_5.len, 0);
 if (VAR_6 != VAR_5.len)
  goto out;

 VAR_6 = FUNC_3(VAR_4, &VAR_5, VAR_0);
 if (VAR_6)
  goto out;

 FUNC_5("done\n");
out:
 FUNC_4(VAR_3, VAR_1);
 FUNC_0(VAR_2);
 return VAR_6;
}
