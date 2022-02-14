
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int version ;
struct stat {int st_size; } ;
struct moduledir {int* d_hints; int d_flags; int d_hintsz; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int* FUNC_2 (int) ;
 char* FUNC_3 (struct moduledir*,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,int*,int) ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;

__attribute__((used)) static void
FUNC_7(struct moduledir *VAR_4)
{
 struct stat VAR_5;
 char *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 if (VAR_4->d_hints != ((void*)0) || (VAR_4->d_flags & VAR_2))
  return;
 VAR_6 = FUNC_3(VAR_4, "linker.hints");
 if (FUNC_6(VAR_6, &VAR_5) != 0 ||
   VAR_5.st_size < (ssize_t)(sizeof(VAR_9) + sizeof(int)) ||
   VAR_5.st_size > VAR_0 || (VAR_7 = FUNC_4(VAR_6, VAR_3)) < 0) {
  FUNC_1(VAR_6);
  VAR_4->d_flags |= VAR_2;
  return;
 }
 FUNC_1(VAR_6);
 VAR_8 = FUNC_5(VAR_7, &VAR_9, sizeof(VAR_9));
 if (VAR_8 != sizeof(VAR_9) || VAR_9 != VAR_1)
  goto bad;
 VAR_8 = VAR_5.st_size - VAR_8;
 VAR_4->d_hints = FUNC_2(VAR_8);
 if (VAR_4->d_hints == ((void*)0))
  goto bad;
 if (FUNC_5(VAR_7, VAR_4->d_hints, VAR_8) != VAR_8)
  goto bad;
 VAR_4->d_hintsz = VAR_8;
 FUNC_0(VAR_7);
 return;
bad:
 FUNC_0(VAR_7);
 FUNC_1(VAR_4->d_hints);
 VAR_4->d_hints = ((void*)0);
 VAR_4->d_flags |= VAR_2;
 return;
}
