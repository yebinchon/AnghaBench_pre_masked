
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ev_name; char ev_type; char* ev_predicate; int * ev_acquire; } ;
typedef TYPE_1__ ls_event_info_t ;
typedef int hrtime_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* VAR_1 ;
 char* VAR_2 ;
 int * VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char**,char*,char*,int ) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_5(int VAR_7)
{
 ls_event_info_t *VAR_8 = &VAR_1[VAR_7];
 char *VAR_9 = ((void*)0);
 char VAR_10[20];
 const char *VAR_11, *VAR_12;
 char *VAR_13 = "arg1";
 char VAR_14[80];
 hrtime_t VAR_15;
 int VAR_16;

 if (VAR_8->ev_name[0] == '\0')
  return;

 if (VAR_8->ev_type == 'I') {
  VAR_11 = "(uintptr_t)(curthread->td_oncpu << 16) + \n"
      "\t    0x01000000 + curthread->td_pri_class";

  VAR_12 = "(uintptr_t)arg0";
  VAR_13 = "arg2";
 } else {



  VAR_11 = "stringof(args[0]->lock_object.lo_name)";

  VAR_12 = "caller";
 }

 if (VAR_5 > VAR_0) {
  for (VAR_16 = 0; VAR_5 > FUNC_0(VAR_16); VAR_16++)
   continue;

  if (VAR_6) {
   (void) FUNC_4(VAR_10, "\tstack(%d);\n", VAR_16);
  } else {
   (void) FUNC_4(VAR_10, ", stack(%d)", VAR_16);
  }
 } else {
  (void) FUNC_4(VAR_10, "");
 }

 if (VAR_8->ev_acquire != ((void*)0)) {





  FUNC_1("%s\n", VAR_8->ev_acquire);
  FUNC_2(&VAR_9, VAR_8->ev_predicate, ((void*)0), 0);
  FUNC_2(&VAR_9, VAR_4, ((void*)0), 0);
  if (VAR_9 != ((void*)0))
   FUNC_1("/%s/\n", VAR_9);

  FUNC_1("{\n");
  (void) FUNC_4(VAR_14, "self->ev%d[(uintptr_t)arg0]", VAR_7);

  if (VAR_8->ev_type == 'H') {
   FUNC_1("\t%s = timestamp;\n", VAR_14);
  } else {





   FUNC_1("\t%s++;\n", VAR_14);
  }

  FUNC_1("}\n\n");
  FUNC_3(&VAR_9);
  VAR_9 = ((void*)0);

  if (VAR_8->ev_type == 'E') {







   FUNC_1("%s\n", VAR_8->ev_name);
   FUNC_1("/%s/\n{\n\t%s--;\n}\n\n", VAR_14, VAR_14);
  }

  FUNC_2(&VAR_9, VAR_14, ((void*)0), 0);

  if (VAR_8->ev_type == 'H') {
   (void) FUNC_4(VAR_14, "timestamp -\n\t    "
       "self->ev%d[(uintptr_t)arg0]", VAR_7);
  }

  VAR_13 = VAR_14;
 } else {
  FUNC_2(&VAR_9, VAR_8->ev_predicate, ((void*)0), 0);
  if (VAR_8->ev_type != 'I')
   FUNC_2(&VAR_9, VAR_4, ((void*)0), 0);
  else
   FUNC_2(&VAR_9, VAR_2, ((void*)0), 0);
 }

 if ((VAR_15 = VAR_3[VAR_7]) != 0)
  FUNC_2(&VAR_9, VAR_13, ">=", VAR_15);

 FUNC_1("%s\n", VAR_8->ev_name);

 if (VAR_9 != ((void*)0))
  FUNC_1("/%s/\n", VAR_9);
 FUNC_3(&VAR_9);

 FUNC_1("{\n");

 if (VAR_6) {
  FUNC_1("\ttrace(%dULL);\n", VAR_7);
  FUNC_1("\ttrace(%s);\n", VAR_11);
  FUNC_1("\ttrace(%s);\n", VAR_12);
  FUNC_1(VAR_10);
 } else {







  FUNC_1("\t@avg[%dULL, %s, %s%s] = avg(%s);\n",
      VAR_7, VAR_11, VAR_12, VAR_10, VAR_13);

  if (VAR_5 >= VAR_0) {
   FUNC_1("\t@hist[%dULL, %s, %s%s] = quantize"
       "(%s);\n", VAR_7, VAR_11, VAR_12, VAR_10, VAR_13);
  }
 }

 if (VAR_8->ev_acquire != ((void*)0))
  FUNC_1("\tself->ev%d[arg0] = 0;\n", VAR_7);

 FUNC_1("}\n\n");
}
