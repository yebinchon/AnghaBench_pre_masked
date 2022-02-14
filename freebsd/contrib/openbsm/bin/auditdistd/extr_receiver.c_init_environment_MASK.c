
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adreq {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct adreq*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct adreq*) ;
 int FUNC_3 (int *) ;
 struct adreq* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(void)
{
 struct adreq *VAR_13;
 unsigned int VAR_14;

 FUNC_0(&VAR_6);
 FUNC_5(&VAR_8);
 FUNC_3(&VAR_7);
 FUNC_0(&VAR_3);
 FUNC_5(&VAR_5);
 FUNC_3(&VAR_4);
 FUNC_0(&VAR_9);
 FUNC_5(&VAR_11);
 FUNC_3(&VAR_10);

 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  VAR_13 = FUNC_4(sizeof(*VAR_13) + VAR_0);
  if (VAR_13 == ((void*)0)) {
   FUNC_6(VAR_2,
       "Unable to allocate %zu bytes of memory for adreq object.",
       sizeof(*VAR_13) + VAR_0);
  }
  FUNC_2(VAR_13);
  FUNC_1(&VAR_6, VAR_13, VAR_12);
 }
}
