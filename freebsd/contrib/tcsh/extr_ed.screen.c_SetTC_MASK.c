
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termcapval {char* name; int val; } ;
struct termcapstr {char* name; } ;
typedef void* Char ;


 int FUNC_0 (void*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct termcapstr*,char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 int VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 size_t VAR_30 ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (char*) ;
 int VAR_31 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 struct termcapstr* VAR_32 ;
 struct termcapval* VAR_33 ;

void
FUNC_9(char *VAR_34, char *VAR_35)
{
    struct termcapstr *VAR_36;
    struct termcapval *VAR_37;




    FUNC_6("settc");
    for (VAR_36 = VAR_32; VAR_36->name != ((void*)0); VAR_36++)
 if (FUNC_8(VAR_36->name, VAR_34) == 0)
     break;
    if (VAR_36->name != ((void*)0)) {
 FUNC_3(VAR_36, VAR_35);



 if (FUNC_1(VAR_25) && FUNC_1(VAR_28))
     VAR_31 = (FUNC_8(FUNC_2(VAR_25), FUNC_2(VAR_28)) == 0);
 else
     VAR_31 = 0;
 if (FUNC_1(VAR_25) && FUNC_1(VAR_27))
     VAR_31 |= (FUNC_8(FUNC_2(VAR_25), FUNC_2(VAR_27)) == 0);

 VAR_5 = FUNC_1(VAR_18);
 VAR_6 = FUNC_1(VAR_20) || FUNC_1(VAR_10);
 VAR_7 = FUNC_1(VAR_22) || FUNC_1(VAR_21) || FUNC_1(VAR_12);
 VAR_8 = FUNC_1(VAR_29) || FUNC_1(VAR_16);
 return;
    }




    for (VAR_37 = VAR_33; VAR_37->name != ((void*)0); VAR_37++)
 if (FUNC_8(VAR_37->name, VAR_34) == 0)
     break;

    if (VAR_37->name != ((void*)0)) {
 if (VAR_37 == &VAR_33[VAR_26] || VAR_37 == &VAR_33[VAR_23] ||
     VAR_37 == &VAR_33[VAR_17] || VAR_37 == &VAR_33[VAR_30]) {
     if (FUNC_8(VAR_35, "yes") == 0)
  VAR_37->val = 1;
     else if (FUNC_8(VAR_35, "no") == 0)
  VAR_37->val = 0;
     else {
  FUNC_7(VAR_1, VAR_37->name);
  return;
     }
     VAR_15 = FUNC_4(VAR_26);
     VAR_11 = FUNC_4(VAR_23);
     VAR_14 = FUNC_4(VAR_17) ? VAR_3 : 0;
     VAR_14 |= FUNC_4(VAR_30) ? VAR_4 : 0;
     if (VAR_37 == &VAR_33[VAR_17] || VAR_37 == &VAR_33[VAR_30])
  FUNC_0(FUNC_4(VAR_24), FUNC_4(VAR_19));
     return;
 }
 else {
     VAR_37->val = FUNC_5(VAR_35);
     VAR_9 = (Char) FUNC_4(VAR_19);
     VAR_13 = (Char) FUNC_4(VAR_24);
     if (VAR_37 == &VAR_33[VAR_19] || VAR_37 == &VAR_33[VAR_24])
  FUNC_0(FUNC_4(VAR_24), FUNC_4(VAR_19));
     return;
 }
    }
    FUNC_7(VAR_0 | VAR_2, VAR_34);
    return;
}
