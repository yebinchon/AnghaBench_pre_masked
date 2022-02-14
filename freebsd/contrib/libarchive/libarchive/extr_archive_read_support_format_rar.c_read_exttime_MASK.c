
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* time_t ;
struct tm {unsigned int tm_sec; } ;
struct rar {long mnsec; long cnsec; long ansec; long arcnsec; void* arctime; void* atime; void* ctime; void* mtime; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 void* FUNC_2 (int) ;
 struct tm* FUNC_3 (void**) ;
 void* FUNC_4 (struct tm*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_1, struct rar *VAR_2, const char *VAR_3)
{
  unsigned VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
  int VAR_9, VAR_10;
  struct tm *VAR_11;
  time_t VAR_12;
  long VAR_13;

  if (VAR_1 + 2 > VAR_3)
    return (-1);
  VAR_5 = FUNC_0(VAR_1);
  VAR_1 += 2;

  for (VAR_10 = 3; VAR_10 >= 0; VAR_10--)
  {
    VAR_12 = 0;
    if (VAR_10 == 3)
      VAR_12 = VAR_2->mtime;
    VAR_4 = VAR_5 >> VAR_10 * 4;
    if (VAR_4 & 8)
    {
      if (!VAR_12)
      {
        if (VAR_1 + 4 > VAR_3)
          return (-1);
        VAR_9 = FUNC_1(VAR_1);
        VAR_12 = FUNC_2(VAR_9);
        VAR_1 += 4;
      }
      VAR_6 = 0;
      VAR_8 = VAR_4 & 3;
      if (VAR_1 + VAR_8 > VAR_3)
        return (-1);
      for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
      {
        VAR_6 = (((unsigned)(unsigned char)*VAR_1) << 16) | (VAR_6 >> 8);
        VAR_1++;
      }
      VAR_11 = FUNC_3(&VAR_12);
      VAR_13 = VAR_11->tm_sec + VAR_6 / VAR_0;
      if (VAR_4 & 4)
      {
        VAR_11->tm_sec++;
        VAR_12 = FUNC_4(VAR_11);
      }
      if (VAR_10 == 3)
      {
        VAR_2->mtime = VAR_12;
        VAR_2->mnsec = VAR_13;
      }
      else if (VAR_10 == 2)
      {
        VAR_2->ctime = VAR_12;
        VAR_2->cnsec = VAR_13;
      }
      else if (VAR_10 == 1)
      {
        VAR_2->atime = VAR_12;
        VAR_2->ansec = VAR_13;
      }
      else
      {
        VAR_2->arctime = VAR_12;
        VAR_2->arcnsec = VAR_13;
      }
    }
  }
  return (0);
}
