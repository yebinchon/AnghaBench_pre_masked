
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int,struct msg_hdr*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 size_t FUNC_9 (int,int ,size_t,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 () ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(void)
{
 struct msg_hdr VAR_6;
 int VAR_7, VAR_8;
 size_t VAR_9;

 VAR_8 = FUNC_1();
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_2(VAR_8);
 if (VAR_7)
  goto shutdown;

 VAR_7 = FUNC_3(VAR_8);
 if (VAR_7)
  goto close;

 FUNC_7("...");
 FUNC_4(((void*)0));
 FUNC_5(&VAR_5, ((void*)0));
 VAR_9 = FUNC_9(VAR_8, VAR_4, VAR_2, 0);
 if (VAR_9 == VAR_2)
  VAR_7 = FUNC_6(VAR_8, &VAR_6, VAR_0);
 else
  VAR_7 = (int) VAR_9;

 FUNC_5(&VAR_3, ((void*)0));

close:
 FUNC_0(VAR_8);
shutdown:
 FUNC_10(VAR_8, VAR_1);
 FUNC_8(VAR_8);
 if (!VAR_7)
  FUNC_11();
 return VAR_7;
}
