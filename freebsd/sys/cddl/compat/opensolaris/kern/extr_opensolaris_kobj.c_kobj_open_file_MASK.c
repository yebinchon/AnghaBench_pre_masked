
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _buf {int * ptr; scalar_t__ mounted; } ;


 int VAR_0 ;
 struct _buf* FUNC_0 (int,int ) ;
 int FUNC_1 (struct _buf*,int) ;
 int * FUNC_2 (char const*) ;
 int * FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 () ;

struct _buf *
FUNC_5(const char *VAR_1)
{
 struct _buf *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 VAR_2->mounted = FUNC_4();




 if (VAR_2->mounted)
  VAR_2->ptr = FUNC_3(VAR_1);
 else
  VAR_2->ptr = FUNC_2(VAR_1);
 if (VAR_2->ptr == ((void*)0)) {
  FUNC_1(VAR_2, sizeof(*VAR_2));
  return ((struct _buf *)-1);
 }
 return (VAR_2);
}
