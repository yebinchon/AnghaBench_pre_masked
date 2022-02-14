
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_buf {scalar_t__* buf; int size; scalar_t__* crs; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__*,char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct print_buf*,char*,int) ;
 int FUNC_5 (struct print_buf*,struct print_buf*) ;
 int FUNC_6 (struct print_buf*) ;
 int FUNC_7 (struct print_buf*,char*) ;

int FUNC_8(struct print_buf *VAR_1)
{
 char *VAR_2 = "\n\n*** PRINT BUFFER OVERFLOW ***\n\n";
 char *VAR_3;
 struct print_buf VAR_4;

 if (!VAR_1->buf)
  return 0;

 if (VAR_1->buf[VAR_1->size - 1] == 0) {
  VAR_3 = FUNC_1(VAR_1->size, VAR_0);
  if (VAR_3) {
   FUNC_4(&VAR_4, VAR_3, VAR_1->size);
   FUNC_5(&VAR_4, VAR_1);
   FUNC_5(VAR_1, &VAR_4);
   FUNC_0(VAR_3);
   FUNC_2(VAR_1->buf, VAR_2, FUNC_3(VAR_2));
  } else {
   FUNC_6(VAR_1);
   FUNC_7(VAR_1, VAR_2);
  }
 }
 return (VAR_1->crs - VAR_1->buf + 1);
}
