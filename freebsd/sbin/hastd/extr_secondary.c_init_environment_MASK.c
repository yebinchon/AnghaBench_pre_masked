
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hio {int * hio_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct hio*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hio*) ;
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
 int VAR_13 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,size_t) ;

__attribute__((used)) static void
FUNC_7(void)
{
 struct hio *VAR_14;
 unsigned int VAR_15;




 FUNC_0(&VAR_6);
 FUNC_5(&VAR_8);
 FUNC_2(&VAR_7);
 FUNC_0(&VAR_3);
 FUNC_5(&VAR_5);
 FUNC_2(&VAR_4);
 FUNC_0(&VAR_11);
 FUNC_5(&VAR_13);
 FUNC_2(&VAR_12);




 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
  VAR_14 = FUNC_4(sizeof(*VAR_14));
  if (VAR_14 == ((void*)0)) {
   FUNC_6(VAR_0,
       "Unable to allocate memory (%zu bytes) for hio request.",
       sizeof(*VAR_14));
  }
  VAR_14->hio_data = FUNC_4(VAR_2);
  if (VAR_14->hio_data == ((void*)0)) {
   FUNC_6(VAR_0,
       "Unable to allocate memory (%zu bytes) for gctl_data.",
       (size_t)VAR_2);
  }
  FUNC_3(VAR_14);
  FUNC_1(&VAR_6, VAR_14, VAR_10);
  VAR_9++;
 }
}
