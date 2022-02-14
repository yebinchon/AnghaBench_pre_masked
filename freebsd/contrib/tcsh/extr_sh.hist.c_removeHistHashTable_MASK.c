
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Hist {unsigned int Hhash; } ;
struct TYPE_2__ {int deleted; int removeCount; } ;


 int FUNC_0 (int) ;
 struct Hist* VAR_0 ;
 struct Hist* VAR_1 ;
 size_t FUNC_1 (unsigned int,int ) ;
 TYPE_1__ VAR_2 ;
 struct Hist** VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct Hist *VAR_5)
{
    unsigned VAR_6 = VAR_5->Hhash;
    if (!VAR_3 || !VAR_6)
        return;

    while ((VAR_6 = FUNC_1(VAR_6, VAR_4)),
           VAR_3[VAR_6] != VAR_1) {
        if (VAR_5 == VAR_3[VAR_6]) {
     unsigned VAR_7;
     unsigned VAR_8 = 0;
     VAR_3[VAR_6] = VAR_0;

     VAR_7 = 1;
     while (VAR_3[FUNC_1(VAR_6+VAR_7, VAR_4)] ==
     VAR_0)
  VAR_7++;
     if (VAR_3[FUNC_1(VAR_6+VAR_7, VAR_4)] ==
  VAR_1) {

  VAR_8 = VAR_7;
  while (VAR_7-- > 0) {
      VAR_3[FUNC_1(VAR_6+VAR_7, VAR_4)] =
   VAR_1;
  }
     }
     VAR_2.deleted += 1 - VAR_8;
     VAR_2.removeCount++;
            return;
        }
        VAR_6++;
    }
    FUNC_0(!"Hist entry not found in hash table");
}
