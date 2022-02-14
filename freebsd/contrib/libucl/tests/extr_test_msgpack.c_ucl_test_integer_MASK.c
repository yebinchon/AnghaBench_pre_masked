
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int ucl_object_t ;
typedef int curf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (double*,int*,int) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (double) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static ucl_object_t*
FUNC_6 (void)
{
 ucl_object_t *VAR_6;
 int VAR_7, VAR_8;
 uint64_t VAR_9;
 double VAR_10;

 VAR_6 = FUNC_5 (VAR_2);
 VAR_7 = FUNC_1 () % VAR_5;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8 ++) {
  VAR_9 = ((uint64_t)FUNC_1 ()) << 32 | FUNC_1 ();
  FUNC_2 (VAR_6, FUNC_4 (VAR_9 % 128));
  FUNC_2 (VAR_6, FUNC_4 (-(VAR_9 % 128)));
  VAR_9 = ((uint64_t)FUNC_1 ()) << 32 | FUNC_1 ();
  FUNC_2 (VAR_6, FUNC_4 (VAR_9 % VAR_3));
  FUNC_2 (VAR_6, FUNC_4 (-(VAR_9 % VAR_0)));
  VAR_9 = ((uint64_t)FUNC_1 ()) << 32 | FUNC_1 ();
  FUNC_2 (VAR_6, FUNC_4 (VAR_9 % VAR_4));
  FUNC_2 (VAR_6, FUNC_4 (-(VAR_9 % VAR_1)));
  VAR_9 = ((uint64_t)FUNC_1 ()) << 32 | FUNC_1 ();
  FUNC_2 (VAR_6, FUNC_4 (VAR_9));
  FUNC_2 (VAR_6, FUNC_4 (-VAR_9));

  VAR_9 = ((uint64_t)FUNC_1 ()) << 32 | FUNC_1 ();
  VAR_10 = (VAR_9 % 128) / 19 * 16;
  FUNC_2 (VAR_6, FUNC_3 (VAR_10));
  VAR_9 = ((uint64_t)FUNC_1 ()) << 32 | FUNC_1 ();
  VAR_10 = -(VAR_9 % 128) / 19 * 16;
  FUNC_2 (VAR_6, FUNC_3 (VAR_10));
  VAR_9 = ((uint64_t)FUNC_1 ()) << 32 | FUNC_1 ();
  VAR_10 = (VAR_9 % 65536) / 19 * 16;
  FUNC_2 (VAR_6, FUNC_3 (VAR_10));
  FUNC_2 (VAR_6, FUNC_3 (-VAR_10));
  VAR_9 = ((uint64_t)FUNC_1 ()) << 32 | FUNC_1 ();
  VAR_10 = (VAR_9 % VAR_1) / 19 * 16;
  FUNC_2 (VAR_6, FUNC_3 (VAR_10));
  VAR_9 = ((uint64_t)FUNC_1 ()) << 32 | FUNC_1 ();
  FUNC_0 (&VAR_10, &VAR_9, sizeof (VAR_10));
  FUNC_2 (VAR_6, FUNC_4 (VAR_9));
 }

 return VAR_6;
}
