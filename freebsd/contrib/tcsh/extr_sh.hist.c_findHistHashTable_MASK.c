
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {int dummy; } ;
struct Hist {unsigned int Hhash; int Hlex; } ;


 int FUNC_0 (int) ;
 struct Hist* VAR_0 ;
 int FUNC_1 () ;
 struct Hist* VAR_1 ;
 unsigned int FUNC_2 (unsigned int,int) ;
 scalar_t__ FUNC_3 (struct wordent*,int *) ;
 struct Hist** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct Hist *
FUNC_4(struct wordent *VAR_4, unsigned VAR_5)
{
    unsigned VAR_6 = 0;
    unsigned VAR_7 = VAR_5;
    struct Hist *VAR_8;
    if (!VAR_2)
 return ((void*)0);
    while ((VAR_7 = FUNC_2(VAR_7, VAR_3)),
           (VAR_8 = VAR_2[VAR_7]) != VAR_1) {
        if (VAR_8 == VAR_0)
     VAR_6++;
 else if (VAR_8->Hhash == VAR_5 && FUNC_3(VAR_4, &(VAR_8->Hlex)))
            return VAR_8;
 if (VAR_6 > (VAR_3>>4)) {

            FUNC_1();
            FUNC_0(VAR_3);
     return FUNC_4(VAR_4, VAR_5);
 }
        VAR_7++;
    }
    return ((void*)0);
}
