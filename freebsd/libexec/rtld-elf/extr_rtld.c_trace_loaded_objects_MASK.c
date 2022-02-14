
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {char const* path; } ;
struct TYPE_12__ {int sod_minor; int sod_major; } ;
struct TYPE_11__ {int name; TYPE_1__* obj; struct TYPE_11__* next; } ;
struct TYPE_10__ {char* strtab; TYPE_3__* needed; int path; scalar_t__ marker; } ;
struct TYPE_9__ {int traced; char* path; int mapbase; } ;
typedef TYPE_2__ Obj_Entry ;
typedef TYPE_3__ Needed_Entry ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_6__* VAR_1 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*) ;
 TYPE_5__* VAR_2 ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_7(Obj_Entry *VAR_3)
{
    const char *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8;
    int VAR_9;

    if ((VAR_7 = FUNC_2(FUNC_1("TRACE_LOADED_OBJECTS_PROGNAME"))) == ((void*)0))
 VAR_7 = "";

    if ((VAR_4 = FUNC_2(FUNC_1("TRACE_LOADED_OBJECTS_FMT1"))) == ((void*)0))
 VAR_4 = "\t%o => %p (%x)\n";

    if ((VAR_5 = FUNC_2(FUNC_1("TRACE_LOADED_OBJECTS_FMT2"))) == ((void*)0))
 VAR_5 = "\t%o (%x)\n";

    VAR_8 = FUNC_2(FUNC_1("TRACE_LOADED_OBJECTS_ALL"));

    for (; VAR_3 != ((void*)0); VAR_3 = FUNC_0(VAR_3, VAR_0)) {
 Needed_Entry *VAR_10;
 const char *VAR_11, *VAR_12;
 bool VAR_13;

 if (VAR_3->marker)
     continue;
 if (VAR_8 && VAR_3->needed != ((void*)0))
     FUNC_3("%s:\n", VAR_3->path);
 for (VAR_10 = VAR_3->needed; VAR_10; VAR_10 = VAR_10->next) {
     if (VAR_10->obj != ((void*)0)) {
  if (VAR_10->obj->traced && !VAR_8)
      continue;
  VAR_10->obj->traced = 1;
  VAR_12 = VAR_10->obj->path;
     } else
  VAR_12 = "not found";

     VAR_11 = VAR_3->strtab + VAR_10->name;
     VAR_13 = FUNC_6(VAR_11, "lib", 3) == 0;

     VAR_6 = VAR_13 ? VAR_4 : VAR_5;
     while ((VAR_9 = *VAR_6++) != '\0') {
  switch (VAR_9) {
  default:
      FUNC_4(VAR_9);
      continue;
  case '\\':
      switch (VAR_9 = *VAR_6) {
      case '\0':
   continue;
      case 'n':
   FUNC_4('\n');
   break;
      case 't':
   FUNC_4('\t');
   break;
      }
      break;
  case '%':
      switch (VAR_9 = *VAR_6) {
      case '\0':
   continue;
      case '%':
      default:
   FUNC_4(VAR_9);
   break;
      case 'A':
   FUNC_5(VAR_7);
   break;
      case 'a':
   FUNC_5(VAR_1->path);
   break;
      case 'o':
   FUNC_5(VAR_11);
   break;
      case 'p':
   FUNC_5(VAR_12);
   break;
      case 'x':
   FUNC_3("%p", VAR_10->obj ? VAR_10->obj->mapbase :
     0);
   break;
      }
      break;
  }
  ++VAR_6;
     }
 }
    }
}
