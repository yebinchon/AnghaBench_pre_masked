
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SHA_Defn {int version; TYPE_1__* axf; } ;
typedef enum sha_version { ____Placeholder_sha_version } sha_version ;
struct TYPE_2__ {scalar_t__ hashsize; } ;


 scalar_t__ VAR_0 ;





 struct SHA_Defn* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 size_t FUNC_2 (struct SHA_Defn*) ;
 int FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static void
FUNC_4(char *VAR_3, char *VAR_4, enum sha_version VAR_5)
{
 const struct SHA_Defn *VAR_6;
 size_t VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_1); VAR_7++)
  if (VAR_1[VAR_7].version == VAR_5)
   break;
 if (VAR_7 == FUNC_2(VAR_1))
  FUNC_3("bogus sha version auth_mode %u\n", (unsigned)VAR_5);

 VAR_6 = &VAR_1[VAR_7];


 FUNC_0((void *)VAR_4);
 if (VAR_6->axf->hashsize > VAR_0)
  FUNC_0((void *)(VAR_4 + VAR_0));

 switch (VAR_6->version) {
 case 132:
  FUNC_1(VAR_3, VAR_4 + 12, VAR_6->axf->hashsize);
  break;





 case 130:
  FUNC_1(VAR_3, VAR_4, VAR_6->axf->hashsize);
  break;
 case 129:
  FUNC_1(VAR_3,
      VAR_4 + VAR_0 * 3 - VAR_6->axf->hashsize,
      VAR_6->axf->hashsize - VAR_0);
  FUNC_1(VAR_3 + VAR_6->axf->hashsize - VAR_0, VAR_4,
      VAR_0);
  break;
 case 128:
  FUNC_1(VAR_3, VAR_4 + VAR_0, VAR_0);
  FUNC_1(VAR_3 + VAR_0, VAR_4, VAR_0);
  break;
 }
}
