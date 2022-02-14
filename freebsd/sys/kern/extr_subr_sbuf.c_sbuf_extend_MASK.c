
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int s_size; char* s_buf; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct sbuf*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*,int ) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct sbuf *VAR_1, int VAR_2)
{
 char *VAR_3;
 int VAR_4;

 if (!FUNC_2(VAR_1))
  return (-1);
 VAR_4 = FUNC_7(VAR_1->s_size + VAR_2);
 VAR_3 = FUNC_1(VAR_4, FUNC_4(VAR_1));
 if (VAR_3 == ((void*)0))
  return (-1);
 FUNC_6(VAR_3, VAR_1->s_buf, VAR_1->s_size);
 if (FUNC_3(VAR_1))
  FUNC_0(VAR_1->s_buf);
 else
  FUNC_5(VAR_1, VAR_0);
 VAR_1->s_buf = VAR_3;
 VAR_1->s_size = VAR_4;
 return (0);
}
