
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct moduledir {int d_hintsz; int d_path; int * d_hints; } ;
struct mod_depend {int md_ver_preferred; int md_ver_minimum; int md_ver_maximum; } ;


 int FUNC_0 (int *,int *) ;

 int FUNC_1 (int *,char const*,int) ;
 char* FUNC_2 (int ,char const*,int,int *) ;
 int * VAR_0 ;
 int FUNC_3 (struct moduledir*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static char *
FUNC_5(struct moduledir *VAR_1, const char *VAR_2,
 struct mod_depend *VAR_3)
{
 u_char *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 char *VAR_8;
 int *VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 FUNC_3(VAR_1);
 VAR_15 = FUNC_4(VAR_2);
 VAR_13 = 0;
 VAR_8 = ((void*)0);
 VAR_10 = 0;
 if (VAR_1->d_hints == ((void*)0))
  goto bad;
 VAR_5 = VAR_1->d_hints;
 VAR_6 = VAR_5 + VAR_1->d_hintsz;
 VAR_12 = VAR_11 = 0;
 VAR_7 = VAR_4 = ((void*)0);
 while (VAR_5 < VAR_6 && !VAR_13) {
  VAR_9 = (int*)VAR_5;
  VAR_16 = *VAR_9++;
  VAR_14 = *VAR_9++;
  VAR_4 = (u_char*)VAR_9;
  switch (VAR_14) {
  case 128:
   VAR_12 = *VAR_4++;
   if (VAR_12 != VAR_15 || FUNC_1(VAR_4, VAR_2, VAR_12) != 0)
    break;
   VAR_4 += VAR_12;
   FUNC_0(VAR_1->d_hints, VAR_4);
   VAR_14 = *(int*)VAR_4;
   VAR_4 += sizeof(int);
   VAR_12 = *VAR_4++;
   if (VAR_3 == ((void*)0) || VAR_14 == VAR_3->md_ver_preferred) {
    VAR_13 = 1;
    break;
   }
   if (VAR_14 >= VAR_3->md_ver_minimum &&
     VAR_14 <= VAR_3->md_ver_maximum &&
     VAR_14 > VAR_10) {
    VAR_10 = VAR_14;
    VAR_7 = VAR_4;
    VAR_11 = VAR_12;
   }
   break;
  default:
   break;
  }
  VAR_5 += VAR_16 + sizeof(int);
 }



 if (VAR_13)
  VAR_8 = FUNC_2(VAR_1->d_path, (const char *)VAR_4, VAR_12, ((void*)0));
 else if (VAR_7)
  VAR_8 = FUNC_2(VAR_1->d_path, (const char *)VAR_7, VAR_11, ((void*)0));
bad:




 if (!VAR_13 && !VAR_10 && VAR_8 == ((void*)0))
  VAR_8 = FUNC_2(VAR_1->d_path, VAR_2, VAR_15, VAR_0);
 return VAR_8;
}
