
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct roff_node {scalar_t__ tok; scalar_t__ type; scalar_t__ end; char* string; int flags; TYPE_5__* parent; TYPE_2__* norm; } ;
struct roff_man {int flags; struct roff_node* last; int next; } ;
struct TYPE_12__ {int (* fp ) (struct roff_man*,int ,int,int,int*,char*) ;} ;
struct TYPE_11__ {scalar_t__ tok; TYPE_4__* norm; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_10__ {TYPE_3__ Bl; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_8__ {TYPE_1__ Bl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (char*,size_t) ;
 int FUNC_4 (int ,int,int,int *) ;
 TYPE_6__* FUNC_5 (int ) ;
 int FUNC_6 (struct roff_man*,int,int,int ) ;
 int FUNC_7 (struct roff_man*,int,int,char*) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (struct roff_man*,int ,int,int,int*,char*) ;

__attribute__((used)) static int
FUNC_10(struct roff_man *VAR_15, int VAR_16, char *VAR_17, int VAR_18)
{
 struct roff_node *VAR_19;
 const char *VAR_20, *VAR_21;
 char *VAR_22, *VAR_23, *VAR_24;

 VAR_19 = VAR_15->last;
 if ((VAR_19->tok == VAR_5 && VAR_19->type == VAR_11 &&
      VAR_19->end == VAR_0 && VAR_19->norm->Bl.type == VAR_1) ||
     (VAR_19->parent != ((void*)0) && VAR_19->parent->tok == VAR_5 &&
      VAR_19->parent->norm->Bl.type == VAR_1)) {
  VAR_15->flags |= VAR_6;
  (*FUNC_5(VAR_7)->fp)(VAR_15, VAR_7,
      VAR_16, VAR_18, &VAR_18, VAR_17);
  return 1;
 }







 VAR_23 = ((void*)0);
 for (VAR_22 = VAR_24 = VAR_17 + VAR_18; *VAR_22; VAR_22++) {
  switch (*VAR_22) {
  case ' ':
   if (((void*)0) == VAR_23)
    VAR_23 = VAR_22;
   continue;
  case '\t':





   if (((void*)0) == VAR_23)
    VAR_23 = VAR_22;




   if (VAR_15->flags & VAR_13)
    continue;
   break;
  case '\\':

   if (VAR_22[1])
    VAR_22++;

  default:
   VAR_23 = ((void*)0);
   break;
  }
  VAR_24 = VAR_22 + 1;
 }
 *VAR_24 = '\0';

 if (VAR_23)
  FUNC_4(VAR_4, VAR_16, (int)(VAR_23 - VAR_17), ((void*)0));







 if (VAR_17[VAR_18] == '\0' && (VAR_15->flags & VAR_13) == 0) {
  switch (VAR_15->last->type) {
  case 128:
   VAR_21 = VAR_15->last->string;
   VAR_20 = VAR_24 = FUNC_8(VAR_21, '\0') - 2;
   if (VAR_20 < VAR_21 || VAR_20[0] != '\\' || VAR_20[1] != 'c')
    break;
   while (VAR_20 > VAR_21 && VAR_20[-1] == '\\')
    VAR_20--;
   if ((VAR_24 - VAR_20) % 2)
    break;
   *VAR_24 = '\0';
   return 1;
  default:
   break;
  }
  FUNC_4(VAR_3, VAR_16, (int)(VAR_22 - VAR_17), ((void*)0));
  FUNC_6(VAR_15, VAR_16, VAR_18, VAR_14);
  VAR_15->last->flags |= VAR_10 | VAR_8;
  VAR_15->next = VAR_12;
  return 1;
 }

 FUNC_7(VAR_15, VAR_16, VAR_18, VAR_17+VAR_18);

 if (VAR_15->flags & VAR_13)
  return 1;







 FUNC_0(VAR_17 < VAR_24);

 if (FUNC_3(VAR_17+VAR_18, (size_t)(VAR_24-VAR_17-VAR_18)))
  VAR_15->last->flags |= VAR_9;

 for (VAR_22 = VAR_17 + VAR_18; VAR_22 != ((void*)0); VAR_22 = FUNC_8(VAR_22 + 1, '.')) {
  if (VAR_22 - VAR_17 < VAR_18 + 2)
   continue;
  if (VAR_24 - VAR_22 < 3)
   break;
  if (VAR_22[1] != ' ' ||
      FUNC_1((unsigned char)VAR_22[-2]) == 0 ||
      FUNC_1((unsigned char)VAR_22[-1]) == 0 ||
      (VAR_22[-2] == 'n' && VAR_22[-1] == 'c') ||
      (VAR_22[-2] == 'v' && VAR_22[-1] == 's'))
   continue;
  VAR_22 += 2;
  if (*VAR_22 == ' ')
   VAR_22++;
  if (*VAR_22 == ' ')
   VAR_22++;
  if (FUNC_2((unsigned char)(*VAR_22)))
   FUNC_4(VAR_2, VAR_16, (int)(VAR_22 - VAR_17), ((void*)0));
 }

 return 1;
}
