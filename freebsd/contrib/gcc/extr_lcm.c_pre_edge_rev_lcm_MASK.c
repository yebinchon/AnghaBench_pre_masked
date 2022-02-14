
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edge_list {int dummy; } ;
typedef int sbitmap ;


 int FUNC_0 (struct edge_list*) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (struct edge_list*,int,int *,int *,int *,int *,int *) ;
 int FUNC_4 (struct edge_list*,int *,int *,int *,int *) ;
 int FUNC_5 (struct edge_list*,int *,int *,int *,int *,int *) ;
 struct edge_list* FUNC_6 () ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (scalar_t__,char*,char*,int *,int) ;
 int FUNC_8 (scalar_t__,char*) ;
 int VAR_1 ;
 int FUNC_9 (scalar_t__,struct edge_list*) ;
 int * FUNC_10 (int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (scalar_t__,struct edge_list*) ;

struct edge_list *
FUNC_14 (int VAR_2, sbitmap *VAR_3,
    sbitmap *VAR_4, sbitmap *VAR_5, sbitmap *VAR_6,
    sbitmap **VAR_7, sbitmap **VAR_8)
{
  sbitmap *VAR_9, *VAR_10;
  sbitmap *VAR_11, *VAR_12, *VAR_13;
  sbitmap *VAR_14, *VAR_15;
  struct edge_list *VAR_16;
  int VAR_17;

  VAR_16 = FUNC_6 ();
  VAR_17 = FUNC_0 (VAR_16);

  VAR_9 = FUNC_10 (VAR_1, VAR_2);
  VAR_10 = FUNC_10 (VAR_1, VAR_2);
  FUNC_12 (VAR_9, VAR_1);
  FUNC_12 (VAR_10, VAR_1);
  FUNC_1 (VAR_5, VAR_3, VAR_9, VAR_10);


  VAR_11 = FUNC_10 (VAR_1, VAR_2);
  VAR_12 = FUNC_10 (VAR_1, VAR_2);
  FUNC_2 (VAR_4, VAR_6, VAR_11, VAR_12);
  VAR_13 = FUNC_10 (VAR_17, VAR_2);
  FUNC_3 (VAR_16, VAR_2, VAR_11, VAR_12, VAR_9,
      VAR_6, VAR_13);






  FUNC_11 (VAR_9);
  FUNC_11 (VAR_10);

  FUNC_11 (VAR_12);
  FUNC_11 (VAR_11);

  VAR_14 = FUNC_10 (VAR_17, VAR_2);


  VAR_15 = FUNC_10 (VAR_1 + 1, VAR_2);
  FUNC_4 (VAR_16, VAR_13, VAR_4, VAR_14, VAR_15);
  FUNC_11 (VAR_13);

  *VAR_7 = FUNC_10 (VAR_17, VAR_2);
  *VAR_8 = FUNC_10 (VAR_1, VAR_2);
  FUNC_5 (VAR_16, VAR_4, VAR_14, VAR_15,
        *VAR_7, *VAR_8);

  FUNC_11 (VAR_15);
  FUNC_11 (VAR_14);
  return VAR_16;
}
