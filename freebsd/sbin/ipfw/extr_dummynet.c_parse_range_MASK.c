
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int do_pipe; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,char**,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, char *VAR_3[], uint32_t *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 char *VAR_7, *VAR_8;
 uint32_t VAR_9[2];

 if (VAR_4 == ((void*)0) || VAR_5 < 2) {
  VAR_4 = VAR_9;
  VAR_5 = 2;
 }

 for (VAR_8 = *VAR_3; VAR_8 != ((void*)0); VAR_3++, VAR_2--) {
  VAR_4[0] = FUNC_0(VAR_8, &VAR_7, 10);
  VAR_4[1] = (*VAR_7 != '-') ? VAR_4[0] :
    FUNC_0(VAR_7+1, &VAR_7, 10);
  if (*VAR_7 == '\0') {
   VAR_8 = (VAR_2 > 0) ? *(VAR_3+1) : ((void*)0);
  } else {
   if (*VAR_7 != ',') {
    FUNC_1("invalid number: %s", VAR_8);
    VAR_8 = ++VAR_7;
    continue;
   }

   VAR_8 = ++VAR_7;
   VAR_2++;
   VAR_3--;
  }
  if (VAR_4[1] < VAR_4[0] ||
   VAR_4[0] >= VAR_0-1 ||
   VAR_4[1] >= VAR_0-1) {
   continue;
  }
  VAR_6++;

  if (VAR_1.do_pipe == 1) {
   VAR_4[0] += VAR_0;
   VAR_4[1] += VAR_0;
  }
  VAR_4 = (VAR_6*2 < VAR_5) ? VAR_4 + 2 : VAR_9;
 }
 return VAR_6;
}
