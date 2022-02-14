
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wordent {struct wordent* next; struct wordent* prev; void* word; } ;
struct whyle {struct whyle* w_next; } ;
struct Strbuf {char* s; size_t len; } ;
struct Ain {scalar_t__ a_seek; scalar_t__ f_seek; scalar_t__ type; } ;
typedef struct Strbuf Char ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct Strbuf*,struct Strbuf*) ;
 void* VAR_0 ;
 struct Strbuf* VAR_1 ;
 struct Strbuf* VAR_2 ;
 struct Strbuf* VAR_3 ;
 struct Strbuf VAR_4 ;
 int FUNC_2 (struct wordent*) ;
 int FUNC_3 (struct Strbuf*) ;
 scalar_t__ FUNC_4 (char*) ;
 void* FUNC_5 (char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 int VAR_9 ;




 scalar_t__ VAR_10 ;
 int FUNC_6 (struct Ain*) ;
 int FUNC_7 (struct Strbuf*,int (*) (struct wordent*)) ;
 int FUNC_8 (struct Strbuf*) ;
 int FUNC_9 (char*,struct Strbuf*) ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (struct wordent*) ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (struct Strbuf*) ;
 struct wordent* FUNC_12 (struct wordent*) ;
 scalar_t__ VAR_13 ;
 int FUNC_13 (int) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (struct wordent*,int ) ;
 int FUNC_16 (char*) ;
 struct Strbuf* FUNC_17 (int ) ;
 struct whyle* VAR_14 ;
 int FUNC_18 (struct whyle*) ;
 int FUNC_19 (struct wordent*) ;
 void* FUNC_20 (int) ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_21(int VAR_16, int VAR_17, Char *VAR_18)
{
    struct Strbuf VAR_19 = VAR_4;
    Char *VAR_20;
    struct whyle *VAR_21;
    int VAR_22 = 0;
    struct wordent *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);

    VAR_5 = VAR_16;
    VAR_3 = VAR_18;
    if (VAR_16 == VAR_9) {
 struct Ain VAR_25;
 VAR_25.type = VAR_6;
 VAR_25.f_seek = 0;
 VAR_25.a_seek = 0;
 FUNC_6(&VAR_25);
    }
    FUNC_7(&VAR_19, FUNC_2);
    do {

 if (VAR_13) {
     VAR_23 = FUNC_20(sizeof(*VAR_23));
     VAR_24 = FUNC_20(sizeof(*VAR_23));
     VAR_24->word = VAR_0;
     VAR_24->next = VAR_23;
     VAR_23->prev = VAR_24;
 }

 if (VAR_13 && VAR_12 == VAR_11 && VAR_10 == VAR_6)
     FUNC_14(1, FUNC_13(VAR_16 == VAR_7 ? VAR_15 : VAR_16));

 (void) FUNC_11(&VAR_19);
 FUNC_3(&VAR_19);

 if (VAR_13 && FUNC_4(VAR_19.s) > 0) {
     VAR_23->word = FUNC_5(VAR_19.s);
     VAR_23->next = FUNC_20(sizeof(*VAR_23));
     VAR_23->next->prev = VAR_23;
     VAR_23 = VAR_23->next;
 }

 switch (FUNC_16(VAR_19.s)) {

 case 136:
     if (VAR_17 == 0 && VAR_16 == 131)
  goto end;
     break;

 case 131:
     while (FUNC_11(&VAR_19)) {
  if (VAR_13) {
      VAR_23->word = FUNC_5(VAR_19.s);
      VAR_23->next = FUNC_20(sizeof(*VAR_23));
      VAR_23->next->prev = VAR_23;
      VAR_23 = VAR_23->next;
  }
  continue;
     }

     if ((VAR_16 == 131 || VAR_16 == 136) &&
  FUNC_9(VAR_19.s, VAR_2))
  VAR_17++;
     break;

 case 134:
     if (VAR_16 == 131 || VAR_16 == 136)
  VAR_17--;
     break;

 case 132:
 case 128:
     VAR_22++;
     if (VAR_16 == VAR_7)
  VAR_17++;
     break;

 case 135:
     if (VAR_16 == VAR_8) {
  if (VAR_22 == 0) {
      VAR_21 = VAR_14;
      if (VAR_21) {
       VAR_14 = VAR_21->w_next;
       FUNC_18(VAR_21);
      }
  }
     }
     if (VAR_16 == VAR_7)
  VAR_17--;
     VAR_22--;
     break;

 case 129:
     if (VAR_16 == 129 || VAR_16 == VAR_8)
  VAR_17++;
     break;

 case 133:
     if (VAR_16 == 129 || VAR_16 == VAR_8)
  VAR_17--;
     break;

 case 130:
     if (VAR_16 == VAR_9 && FUNC_11(&VAR_19) && FUNC_9(VAR_19.s, VAR_18))
  VAR_17 = -1;
     break;

 default:
     if (VAR_16 != VAR_9 && (VAR_16 != 129 || VAR_17 != 0))
  break;
     if (VAR_19.len == 0 || VAR_19.s[VAR_19.len - 1] != ':')
  break;
     VAR_19.s[--VAR_19.len] = 0;
     if ((VAR_16 == VAR_9 && FUNC_9(VAR_19.s, VAR_18)) ||
  (VAR_16 == 129 && FUNC_9(VAR_19.s, VAR_1)))
  VAR_17 = -1;
     break;

 case 138:
     if (VAR_16 != 129 || VAR_17 != 0)
  break;
     (void) FUNC_11(&VAR_19);
     if (VAR_19.len != 0 && VAR_19.s[VAR_19.len - 1] == ':')
  VAR_19.s[--VAR_19.len] = 0;
     VAR_20 = FUNC_17(FUNC_0(VAR_19.s));
     FUNC_7(VAR_20, FUNC_19);
     if (FUNC_1(VAR_18, VAR_20))
  VAR_17 = -1;
     FUNC_8(VAR_20);
     break;

 case 137:
     if (VAR_16 == 129 && VAR_17 == 0)
  VAR_17 = -1;
     break;
 }
 if (VAR_13) {
     VAR_24->prev = FUNC_12(VAR_23);
     VAR_24->prev->next = VAR_24;
     FUNC_15(VAR_24, 0);
     FUNC_10(VAR_24);
     FUNC_19(VAR_24);
 } else
     (void) FUNC_11(((void*)0));
    } while (VAR_17 >= 0);
 end:
    FUNC_8(&VAR_19);
}
