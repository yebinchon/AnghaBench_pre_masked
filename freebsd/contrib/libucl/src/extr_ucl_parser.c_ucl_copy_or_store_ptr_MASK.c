
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int flags; int err; int * variables; } ;
typedef int ssize_t ;


 unsigned char* FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (size_t,unsigned char*) ;
 int VAR_1 ;
 int FUNC_2 (struct ucl_parser*,unsigned char**,unsigned char*,int) ;
 int FUNC_3 (struct ucl_parser*,int ,char*,int *) ;
 int FUNC_4 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_5 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_6 (unsigned char*,int) ;

__attribute__((used)) static inline ssize_t
FUNC_7 (struct ucl_parser *VAR_2,
  const unsigned char *VAR_3, unsigned char **VAR_4,
  const char **VAR_5, size_t VAR_6,
  bool VAR_7, bool VAR_8, bool VAR_9)
{
 ssize_t VAR_10 = -1, VAR_11;
 unsigned char *VAR_12;

 if (VAR_7 || VAR_8 ||
   (VAR_9 && VAR_2->variables != ((void*)0)) ||
   !(VAR_2->flags & VAR_1)) {

  *VAR_4 = FUNC_0 (VAR_6 + 1);
  if (*VAR_4 == ((void*)0)) {
   FUNC_3 (VAR_2, VAR_0, "cannot allocate memory for a string",
     &VAR_2->err);
   return 0;
  }
  if (VAR_8) {
   VAR_10 = FUNC_4 (*VAR_4, VAR_3, VAR_6 + 1);
  }
  else {
   VAR_10 = FUNC_5 (*VAR_4, VAR_3, VAR_6 + 1);
  }

  if (VAR_7) {
   VAR_10 = FUNC_6 (*VAR_4, VAR_10);
  }
  if (VAR_9) {
   VAR_12 = *VAR_4;
   VAR_11 = VAR_10;
   VAR_10 = FUNC_2 (VAR_2, VAR_4, VAR_12, VAR_10);
   if (*VAR_4 == ((void*)0)) {

    *VAR_4 = VAR_12;
    VAR_10 = VAR_11;
   }
   else {

    FUNC_1 (VAR_6 + 1, VAR_12);
   }
  }
  *VAR_5 = *VAR_4;
 }
 else {
  *VAR_5 = VAR_3;
  VAR_10 = VAR_6;
 }

 return VAR_10;
}
