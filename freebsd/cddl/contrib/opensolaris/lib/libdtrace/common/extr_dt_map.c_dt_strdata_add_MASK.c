
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int fmt ;
struct TYPE_6__ {int dtrd_format; int dtrd_action; } ;
typedef TYPE_1__ dtrace_recdesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_7__ {int dtfd_format; void** dtfd_string; scalar_t__ dtfd_length; } ;
typedef TYPE_2__ dtrace_fmtdesc_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,void**,size_t) ;
 int FUNC_1 (TYPE_2__*,int) ;
 void** FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,void**) ;
 int FUNC_4 (int *,int ,TYPE_2__*) ;
 int FUNC_5 (int *,int ) ;
 void** FUNC_6 (int *,size_t) ;
 void* FUNC_7 (int *,void**) ;
 void* FUNC_8 (int *,void**) ;
 int VAR_2 ;
 int FUNC_9 (void**) ;

__attribute__((used)) static int
FUNC_10(dtrace_hdl_t *VAR_3, dtrace_recdesc_t *VAR_4, void ***VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8;
 dtrace_fmtdesc_t VAR_9;
 void *VAR_10;

 if (VAR_4->dtrd_format == 0)
  return (0);

 if (VAR_4->dtrd_format <= *VAR_6 &&
     (*VAR_5)[VAR_4->dtrd_format - 1] != ((void*)0)) {
  return (0);
 }

 FUNC_1(&VAR_9, sizeof (VAR_9));
 VAR_9.dtfd_format = VAR_4->dtrd_format;
 VAR_9.dtfd_string = ((void*)0);
 VAR_9.dtfd_length = 0;

 if (FUNC_4(VAR_3, VAR_0, &VAR_9) == -1)
  return (FUNC_5(VAR_3, VAR_2));

 if ((VAR_9.dtfd_string = FUNC_2(VAR_3, VAR_9.dtfd_length)) == ((void*)0))
  return (FUNC_5(VAR_3, VAR_1));

 if (FUNC_4(VAR_3, VAR_0, &VAR_9) == -1) {
  VAR_8 = FUNC_5(VAR_3, VAR_2);
  FUNC_9(VAR_9.dtfd_string);
  return (VAR_8);
 }

 while (VAR_4->dtrd_format > (VAR_7 = *VAR_6)) {
  int VAR_11 = VAR_7 ? (VAR_7 << 1) : 1;
  size_t VAR_12 = VAR_11 * sizeof (void *);
  size_t VAR_13 = VAR_7 * sizeof (void *);
  void **VAR_14 = FUNC_6(VAR_3, VAR_12);

  if (VAR_14 == ((void*)0)) {
   FUNC_3(VAR_3, VAR_9.dtfd_string);
   return (FUNC_5(VAR_3, VAR_1));
  }

  FUNC_0(*VAR_5, VAR_14, VAR_13);
  FUNC_9(*VAR_5);

  *VAR_5 = VAR_14;
  *VAR_6 = VAR_11;
 }

 switch (VAR_4->dtrd_action) {
 case 129:
  VAR_10 = VAR_9.dtfd_string;
  break;
 case 128:
  VAR_10 = FUNC_7(VAR_3, VAR_9.dtfd_string);
  FUNC_3(VAR_3, VAR_9.dtfd_string);
  break;
 default:
  VAR_10 = FUNC_8(VAR_3, VAR_9.dtfd_string);
  FUNC_3(VAR_3, VAR_9.dtfd_string);
  break;
 }

 if (VAR_10 == ((void*)0))
  return (-1);

 (*VAR_5)[VAR_4->dtrd_format - 1] = VAR_10;

 return (0);
}
