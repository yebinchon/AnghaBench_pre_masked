
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* ushort_t ;
typedef int ulong_t ;
typedef void* uint_t ;
typedef int dtrace_attribute_t ;
typedef int dt_idops_t ;
struct TYPE_4__ {char* di_name; int di_lineno; int di_gen; int * di_next; int di_type; int * di_ctfp; int * di_data; void* di_iarg; int const* di_ops; void* di_vers; int di_attr; void* di_id; void* di_flags; void* di_kind; } ;
typedef TYPE_1__ dt_ident_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int) ;
 char* FUNC_2 (char const*) ;
 int VAR_1 ;

dt_ident_t *
FUNC_3(const char *VAR_2, ushort_t VAR_3, ushort_t VAR_4, uint_t VAR_5,
    dtrace_attribute_t VAR_6, uint_t VAR_7,
    const dt_idops_t *VAR_8, void *VAR_9, ulong_t VAR_10)
{
 dt_ident_t *VAR_11;
 char *VAR_12 = ((void*)0);

 if ((VAR_2 != ((void*)0) && (VAR_12 = FUNC_2(VAR_2)) == ((void*)0)) ||
     (VAR_11 = FUNC_1(sizeof (dt_ident_t))) == ((void*)0)) {
  FUNC_0(VAR_12);
  return (((void*)0));
 }

 VAR_11->di_name = VAR_12;
 VAR_11->di_kind = VAR_3;
 VAR_11->di_flags = VAR_4;
 VAR_11->di_id = VAR_5;
 VAR_11->di_attr = VAR_6;
 VAR_11->di_vers = VAR_7;
 VAR_11->di_ops = VAR_8;
 VAR_11->di_iarg = VAR_9;
 VAR_11->di_data = ((void*)0);
 VAR_11->di_ctfp = ((void*)0);
 VAR_11->di_type = VAR_0;
 VAR_11->di_next = ((void*)0);
 VAR_11->di_gen = VAR_10;
 VAR_11->di_lineno = VAR_1;

 return (VAR_11);
}
