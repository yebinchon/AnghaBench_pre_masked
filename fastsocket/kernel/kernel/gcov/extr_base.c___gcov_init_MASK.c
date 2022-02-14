
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_info {unsigned int version; struct gcov_info* next; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct gcov_info*) ;
 scalar_t__ VAR_1 ;
 struct gcov_info* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,unsigned int) ;

void FUNC_4(struct gcov_info *VAR_4)
{
 static unsigned int VAR_5;

 FUNC_1(&VAR_3);
 if (VAR_5 == 0) {
  VAR_5 = VAR_4->version;




  FUNC_3("version magic: 0x%x\n", VAR_5);
 }




 VAR_4->next = VAR_2;
 VAR_2 = VAR_4;
 if (VAR_1)
  FUNC_0(VAR_0, VAR_4);
 FUNC_2(&VAR_3);
}
