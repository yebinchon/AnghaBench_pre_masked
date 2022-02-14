
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct units {char const* name; int mult; } ;


 int FUNC_0 (char*,size_t,char*,char const*) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (char*,size_t,int,char const*,int) ;

__attribute__((used)) static int
FUNC_3 (int VAR_0, const struct units *VAR_1, char *VAR_2, size_t VAR_3,
     int (*VAR_4) (char *, size_t, int, const char *, int),
     int (*VAR_5) (int, unsigned),
     const char *VAR_6)
{
    const struct units *VAR_7;
    int VAR_8 = 0, VAR_9;

    if (VAR_0 == 0)
 return FUNC_0 (VAR_2, VAR_3, "%s", VAR_6);

    for (VAR_7 = VAR_1; VAR_0 > 0 && VAR_7->name; ++VAR_7) {
 int VAR_10;

 VAR_10 = VAR_0 / VAR_7->mult;
 if (VAR_10) {
     VAR_0 = (*VAR_5) (VAR_0, VAR_7->mult);
     VAR_9 = (*VAR_4) (VAR_2, VAR_3, VAR_10, VAR_7->name, VAR_0);
     if (VAR_9 < 0)
  return VAR_9;
     if (VAR_9 > (int) VAR_3) {
  VAR_3 = 0;
  VAR_2 = ((void*)0);
     } else {
  VAR_3 -= VAR_9;
  VAR_2 += VAR_9;
     }
     VAR_8 += VAR_9;
 }
    }
    return VAR_8;
}
