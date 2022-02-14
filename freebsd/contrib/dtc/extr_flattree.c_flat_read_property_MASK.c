
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct property {int dummy; } ;
struct inbuf {int dummy; } ;
struct data {int dummy; } ;


 int VAR_0 ;
 struct property* FUNC_0 (char*,struct data) ;
 struct data FUNC_1 (struct inbuf*,int) ;
 char* FUNC_2 (struct inbuf*,int) ;
 int FUNC_3 (struct inbuf*) ;
 int FUNC_4 (struct inbuf*,int) ;

__attribute__((used)) static struct property *FUNC_5(struct inbuf *VAR_1,
        struct inbuf *VAR_2, int VAR_3)
{
 uint32_t VAR_4, VAR_5;
 char *VAR_6;
 struct data VAR_7;

 VAR_4 = FUNC_3(VAR_1);
 VAR_5 = FUNC_3(VAR_1);

 VAR_6 = FUNC_2(VAR_2, VAR_5);

 if ((VAR_3 & VAR_0) && (VAR_4 >= 8))
  FUNC_4(VAR_1, 8);

 VAR_7 = FUNC_1(VAR_1, VAR_4);

 return FUNC_0(VAR_6, VAR_7);
}
