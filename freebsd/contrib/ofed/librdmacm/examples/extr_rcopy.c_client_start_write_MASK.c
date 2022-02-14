
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int command; } ;
struct msg_write {TYPE_1__ hdr; int size; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct msg_write*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,struct msg_write*,int,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_2)
{
 struct msg_write VAR_3;
 int VAR_4;

 FUNC_2("transferring");
 FUNC_0(((void*)0));
 FUNC_1(&VAR_3, 0, sizeof VAR_3);
 VAR_3.hdr.command = VAR_0;
 VAR_3.hdr.len = sizeof(VAR_3);
 VAR_3.size = VAR_1;

 VAR_4 = FUNC_3(VAR_2, &VAR_3, sizeof VAR_3, 0);
 if (VAR_4 != VAR_3.hdr.len)
  return VAR_4;

 return 0;
}
