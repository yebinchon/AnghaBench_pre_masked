
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ar_hdr {scalar_t__ ar_name; } ;
struct TYPE_5__ {size_t e_rawstrtabsz; unsigned char* e_rawstrtab; } ;
struct TYPE_6__ {TYPE_1__ e_ar; } ;
struct TYPE_7__ {scalar_t__ e_kind; unsigned char const* e_rawfile; int e_rawsize; TYPE_2__ e_u; } ;
typedef TYPE_3__ Elf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char const*) ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char const*,size_t const,int,size_t*) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;

char *
FUNC_6(const struct ar_hdr *VAR_4, Elf *VAR_5)
{
 char *VAR_6;
 unsigned char VAR_7;
 size_t VAR_8, VAR_9;
 const unsigned char *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 const size_t VAR_14 = sizeof(VAR_4->ar_name);

 FUNC_3(VAR_4 != ((void*)0));
 FUNC_3(VAR_5->e_kind == VAR_1);
 FUNC_3((const unsigned char *) VAR_4 >= VAR_5->e_rawfile &&
     (const unsigned char *) VAR_4 < VAR_5->e_rawfile + VAR_5->e_rawsize);

 VAR_10 = (const unsigned char *) VAR_4->ar_name;
 if (VAR_10[0] == '/' && (VAR_7 = VAR_10[1]) >= '0' && VAR_7 <= '9') {





  if (FUNC_2((const char *) (VAR_10 + 1),
   VAR_14 - 1, 10, &VAR_9) == 0) {
   FUNC_1(VAR_0, 0);
   return (((void*)0));
  }

  if (VAR_9 > VAR_5->e_u.e_ar.e_rawstrtabsz) {
   FUNC_1(VAR_0, 0);
   return (((void*)0));
  }

  VAR_11 = VAR_12 = VAR_5->e_u.e_ar.e_rawstrtab + VAR_9;
  VAR_13 = VAR_5->e_u.e_ar.e_rawstrtab + VAR_5->e_u.e_ar.e_rawstrtabsz;

  for (; VAR_11 < VAR_13 && *VAR_11 != '/'; VAR_11++)
   ;
  VAR_8 = (size_t) (VAR_11 - VAR_12 + 1);

  if ((VAR_6 = FUNC_4(VAR_8)) == ((void*)0)) {
   FUNC_1(VAR_3, 0);
   return (((void*)0));
  }

  (void) FUNC_5(VAR_6, (const char *) VAR_12, VAR_8 - 1);
  VAR_6[VAR_8 - 1] = '\0';

  return (VAR_6);
 } else if (FUNC_0(VAR_10)) {
  VAR_13 = VAR_10 + VAR_2;

  if (FUNC_2((const char *) VAR_13, VAR_14 -
   VAR_2, 10,
   &VAR_8) == 0) {
   FUNC_1(VAR_0, 0);
   return (((void*)0));
  }





  if ((VAR_6 = FUNC_4(VAR_8 + 1)) == ((void*)0)) {
   FUNC_1(VAR_3, 0);
   return (((void*)0));
  }




  VAR_12 = (const unsigned char *) (VAR_4 + 1);

  (void) FUNC_5(VAR_6, (const char *) VAR_12, VAR_8);
  VAR_6[VAR_8] = '\0';

  return (VAR_6);
 }
 for (VAR_12 = VAR_10 + VAR_14 - 1; VAR_12 >= VAR_10 && *VAR_12 == ' '; --VAR_12)
  ;

 if (VAR_12 >= VAR_10) {
  if (*VAR_12 == '/') {





   if (VAR_12 > VAR_10 + 1 ||
       (VAR_12 == (VAR_10 + 1) && *VAR_10 != '/'))
    VAR_12--;
  }

  VAR_8 = (size_t) (VAR_12 - VAR_10 + 2);
 } else {

  VAR_10 = (const unsigned char *) "";
  VAR_8 = 1;
 }

 if ((VAR_6 = FUNC_4(VAR_8)) == ((void*)0)) {
  FUNC_1(VAR_3, 0);
  return (((void*)0));
 }

 (void) FUNC_5(VAR_6, (const char *) VAR_10, VAR_8 - 1);
 VAR_6[VAR_8 - 1] = '\0';

 return (VAR_6);
}
