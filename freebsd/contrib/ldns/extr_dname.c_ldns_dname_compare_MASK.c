
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ldns_rdf ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int const*) ;
 int* FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;

int
FUNC_5(const ldns_rdf *VAR_1, const ldns_rdf *VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5, VAR_6;
 size_t VAR_7;
 int VAR_8 = 0;
 uint8_t *VAR_9, *VAR_10;





        if (!VAR_1 && !VAR_2) {
                return 0;
        }
        if (!VAR_1 || !VAR_2) {
                return -1;
        }




 FUNC_1(FUNC_4(VAR_1) == VAR_0);
 FUNC_1(FUNC_4(VAR_2) == VAR_0);

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_2(VAR_2);

 if (VAR_3 == 0 && VAR_4 == 0) {
  return 0;
 }
 if (VAR_3 == 0) {
  return -1;
 }
 if (VAR_4 == 0) {
  return 1;
 }
 VAR_3--;
 VAR_4--;

 while (1) {

  VAR_5 = VAR_3;
  VAR_9 = FUNC_3(VAR_1);
  while (VAR_5 > 0) {
   VAR_9 += *VAR_9 + 1;
   VAR_5--;
  }


  VAR_6 = VAR_4;
  VAR_10 = FUNC_3(VAR_2);
  while (VAR_6 > 0) {
   VAR_10 += *VAR_10 + 1;
   VAR_6--;
  }


  for (VAR_7 = 1; VAR_7 < (size_t)(*VAR_9 + 1); VAR_7++) {
   if (VAR_7 > *VAR_10) {

    VAR_8 = 1;
    goto done;
   }
   if (FUNC_0((int) *(VAR_9 + VAR_7)) <
       FUNC_0((int) *(VAR_10 + VAR_7))) {
       VAR_8 = -1;
       goto done;
   } else if (FUNC_0((int) *(VAR_9 + VAR_7)) >
       FUNC_0((int) *(VAR_10 + VAR_7))) {
       VAR_8 = 1;
       goto done;
   }
  }
  if (*VAR_9 < *VAR_10) {

   VAR_8 = -1;
   goto done;
  }
  if (VAR_3 == 0 && VAR_4 > 0) {
   VAR_8 = -1;
   goto done;
  } else if (VAR_3 > 0 && VAR_4 == 0) {
   VAR_8 = 1;
   goto done;
  } else if (VAR_3 == 0 && VAR_4 == 0) {
   VAR_8 = 0;
   goto done;
  }
  VAR_3--;
  VAR_4--;
 }

 done:
 return VAR_8;
}
