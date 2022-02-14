
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* window; int position; } ;
struct rar {TYPE_1__ lzss; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static inline void
FUNC_4(struct rar *VAR_0, int VAR_1, int VAR_2)
{
  int VAR_3 = FUNC_0(&VAR_0->lzss);
  int VAR_4 = (VAR_3 - VAR_1) & FUNC_1(&VAR_0->lzss);
  int VAR_5, VAR_6, VAR_7;
  unsigned char *VAR_8, *VAR_9;

  VAR_7 = VAR_2;
  while (VAR_7 > 0) {
    VAR_5 = VAR_7;
    if (VAR_3 > VAR_4) {
      if (VAR_5 > FUNC_2(&VAR_0->lzss) - VAR_3)
        VAR_5 = FUNC_2(&VAR_0->lzss) - VAR_3;
    } else {
      if (VAR_5 > FUNC_2(&VAR_0->lzss) - VAR_4)
        VAR_5 = FUNC_2(&VAR_0->lzss) - VAR_4;
    }
    VAR_8 = &(VAR_0->lzss.window[VAR_3]);
    VAR_9 = &(VAR_0->lzss.window[VAR_4]);
    if ((VAR_3 + VAR_5 < VAR_4) || (VAR_4 + VAR_5 < VAR_3))
      FUNC_3(VAR_8, VAR_9, VAR_5);
    else {
      for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
        VAR_8[VAR_6] = VAR_9[VAR_6];
    }
    VAR_7 -= VAR_5;
    VAR_3 = (VAR_3 + VAR_5) & FUNC_1(&(VAR_0->lzss));
    VAR_4 = (VAR_4 + VAR_5) & FUNC_1(&(VAR_0->lzss));
  }
  VAR_0->lzss.position += VAR_2;
}
