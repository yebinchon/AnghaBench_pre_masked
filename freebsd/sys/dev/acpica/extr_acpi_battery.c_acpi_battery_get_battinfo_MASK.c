
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_bst {int state; scalar_t__ units; int dvol; int rate; int cap; int lfcap; int min; } ;
struct acpi_bif {int state; scalar_t__ units; int dvol; int rate; int cap; int lfcap; int min; } ;
struct acpi_battinfo {int state; scalar_t__ units; int dvol; int rate; int cap; int lfcap; int min; } ;
typedef int * device_t ;
typedef int * devclass_t ;


 scalar_t__ FUNC_0 (int *,struct acpi_bst*) ;
 scalar_t__ FUNC_1 (int *,struct acpi_bst*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct acpi_bst*) ;
 int FUNC_3 (struct acpi_bst*) ;
 int FUNC_4 (struct acpi_bst*) ;
 int * FUNC_5 (char*) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct acpi_bst*,int ) ;
 struct acpi_bst* FUNC_9 (int,int ,int) ;

int
FUNC_10(device_t VAR_8, struct acpi_battinfo *VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    devclass_t VAR_20;
    device_t VAR_21;
    struct acpi_bst *VAR_22;
    struct acpi_bif *VAR_23;
    struct acpi_battinfo *VAR_24;





    VAR_20 = FUNC_5("battery");
    if (VAR_20 == ((void*)0))
 return (VAR_4);
    VAR_11 = FUNC_7(VAR_20);
    if (VAR_11 == 0)
 return (VAR_4);





    VAR_22 = FUNC_9(VAR_11 * sizeof(*VAR_22), VAR_5, VAR_6 | VAR_7);
    VAR_24 = FUNC_9(VAR_11 * sizeof(*VAR_24), VAR_5, VAR_6 | VAR_7);
    VAR_23 = FUNC_9(sizeof(*VAR_23), VAR_5, VAR_6 | VAR_7);






    VAR_12 = -1;
    VAR_10 = VAR_18 = VAR_19 = 0;
    VAR_15 = VAR_16 = 0;
    for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {

 FUNC_4(&VAR_24[VAR_14]);





 VAR_21 = FUNC_6(VAR_20, VAR_14);
 if (VAR_21 == ((void*)0))
     continue;


 if (VAR_8 != ((void*)0) && VAR_8 == VAR_21)
     VAR_12 = VAR_14;




 if (FUNC_1(VAR_21, &VAR_22[VAR_14]) != 0 ||
     FUNC_0(VAR_21, VAR_23) != 0)
  continue;


 if (!FUNC_3(&VAR_22[VAR_14]) ||
     !FUNC_2(VAR_23))
     continue;





 VAR_19++;
 if ((VAR_22[VAR_14].state & VAR_1) != 0)
     VAR_22[VAR_14].state &= ~VAR_0;
 VAR_10 |= VAR_22[VAR_14].state;
 VAR_24[VAR_14].state = VAR_22[VAR_14].state;







 if (VAR_23->units == VAR_3 && VAR_23->dvol != 0 && VAR_8 == ((void*)0)) {
     VAR_22[VAR_14].rate = (VAR_22[VAR_14].rate * VAR_23->dvol) / 1000;
     VAR_22[VAR_14].cap = (VAR_22[VAR_14].cap * VAR_23->dvol) / 1000;
     VAR_23->lfcap = (VAR_23->lfcap * VAR_23->dvol) / 1000;
 }






 if (!FUNC_2(VAR_23))
     continue;






 if (VAR_22[VAR_14].cap > VAR_23->lfcap)
     VAR_22[VAR_14].cap = VAR_23->lfcap;


 VAR_24[VAR_14].cap = (100 * VAR_22[VAR_14].cap) / VAR_23->lfcap;


 if (VAR_24[VAR_14].cap != -1) {
     VAR_15 += VAR_22[VAR_14].cap;
     VAR_16 += VAR_23->lfcap;
 }
 if (VAR_22[VAR_14].rate != VAR_2 &&
     (VAR_22[VAR_14].state & VAR_1) != 0)
     VAR_18 += VAR_22[VAR_14].rate;
    }


    if (VAR_8 != ((void*)0) && VAR_12 == -1) {
 VAR_13 = VAR_4;
 goto out;
    }


    VAR_17 = 0;
    for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {





 if (VAR_18 > 0)
     VAR_24[VAR_14].min = (60 * VAR_22[VAR_14].cap) / VAR_18;
 else
     VAR_24[VAR_14].min = 0;
 VAR_17 += VAR_24[VAR_14].min;
    }





    if (VAR_19 > 0) {
 if (VAR_8 == ((void*)0)) {
     VAR_9->cap = (VAR_15 * 100) / VAR_16;
     VAR_9->min = VAR_17;
     VAR_9->state = VAR_10;
     VAR_9->rate = VAR_18;
 } else {
     VAR_9->cap = VAR_24[VAR_12].cap;
     VAR_9->min = VAR_24[VAR_12].min;
     VAR_9->state = VAR_24[VAR_12].state;
     VAR_9->rate = VAR_22[VAR_12].rate;
 }





 if (VAR_18 == 0 || (VAR_9->state & VAR_0))
     VAR_9->min = -1;
    } else
 FUNC_4(VAR_9);

    VAR_13 = 0;

out:
    if (VAR_24)
 FUNC_8(VAR_24, VAR_5);
    if (VAR_23)
 FUNC_8(VAR_23, VAR_5);
    if (VAR_22)
 FUNC_8(VAR_22, VAR_5);
    return (VAR_13);
}
