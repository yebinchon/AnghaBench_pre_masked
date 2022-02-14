
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_size; TYPE_2__* t_intr; int * t_name; int t_type; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_5__ {int intr_signed; int intr_offset; int intr_nbits; int intr_fformat; int intr_type; int intr_iformat; } ;
typedef TYPE_2__ intr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char) ;
 char* FUNC_2 (char*,int*) ;
 int FUNC_3 (int,int *,char*,int) ;
 int FUNC_4 (char*,char) ;
 void* FUNC_5 (int) ;

__attribute__((used)) static char *
FUNC_6(char *VAR_4, tdesc_t **VAR_5)
{
 intr_t *VAR_6 = FUNC_5(sizeof (intr_t));
 tdesc_t *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 switch (*VAR_4++) {
 case 'b':
  VAR_6->intr_type = VAR_2;
  if (*VAR_4 == 's')
   VAR_6->intr_signed = 1;
  else if (*VAR_4 != 'u')
   FUNC_0("intrinsic/b", "[su]", VAR_4);
  VAR_4++;

  if (FUNC_4("cbv", *VAR_4))
   VAR_6->intr_iformat = *VAR_4++;

  VAR_4 = FUNC_2(VAR_4, &VAR_8);
  if (*VAR_4++ != ';')
   FUNC_0("intrinsic/b", "; (post-width)", VAR_4 - 1);

  VAR_4 = FUNC_2(VAR_4, &VAR_6->intr_offset);
  if (*VAR_4++ != ';')
   FUNC_0("intrinsic/b", "; (post-offset)", VAR_4 - 1);

  VAR_4 = FUNC_2(VAR_4, &VAR_6->intr_nbits);
  break;

 case 'R':
  VAR_6->intr_type = VAR_3;
  for (VAR_9 = 0, VAR_10 = 0; FUNC_1(*(VAR_4 + VAR_10)); VAR_10++)
   VAR_9 = VAR_9 * 10 + (*(VAR_4 + VAR_10) - '0');

  if (VAR_9 < 1 || VAR_9 > VAR_0)
   FUNC_0("intrinsic/R", "number <= CTF_FP_MAX", VAR_4);

  VAR_6->intr_fformat = VAR_9;
  VAR_4 += VAR_10;

  if (*VAR_4++ != ';')
   FUNC_0("intrinsic/R", ";", VAR_4 - 1);
  VAR_4 = FUNC_2(VAR_4, &VAR_8);

  VAR_6->intr_nbits = VAR_8 * 8;
  break;
 }

 VAR_7 = FUNC_5(sizeof (*VAR_7));
 VAR_7->t_type = VAR_1;
 VAR_7->t_size = VAR_8;
 VAR_7->t_name = ((void*)0);
 VAR_7->t_intr = VAR_6;
 FUNC_3(3, ((void*)0), "intrinsic: size=%d", VAR_8);
 *VAR_5 = VAR_7;

 return (VAR_4);
}
