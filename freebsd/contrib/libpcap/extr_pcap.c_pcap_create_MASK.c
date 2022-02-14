
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_7__ {char* device; } ;
struct TYPE_8__ {TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;
struct TYPE_9__ {TYPE_2__* (* create_op ) (char*,char*,int*) ;} ;


 int VAR_0 ;
 TYPE_6__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 TYPE_2__* FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ,int ,char*) ;
 int FUNC_4 (char*,size_t,char*,int const*) ;
 char* FUNC_5 (char const*) ;
 TYPE_2__* FUNC_6 (char*,char*,int*) ;
 size_t FUNC_7 (int *) ;

pcap_t *
FUNC_8(const char *VAR_3, char *VAR_4)
{
 size_t VAR_5;
 int VAR_6;
 pcap_t *VAR_7;
 char *VAR_8;
 if (VAR_3 == ((void*)0))
  VAR_8 = FUNC_5("any");
 else {
   VAR_8 = FUNC_5(VAR_3);
 }
 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_4, VAR_0,
      VAR_2, "malloc");
  return (((void*)0));
 }






 for (VAR_5 = 0; VAR_1[VAR_5].create_op != ((void*)0); VAR_5++) {
  VAR_6 = 0;
  VAR_7 = VAR_1[VAR_5].create_op(VAR_8, VAR_4,
      &VAR_6);
  if (VAR_6) {
   if (VAR_7 == ((void*)0)) {



    FUNC_0(VAR_8);
    return (((void*)0));
   }
   VAR_7->opt.device = VAR_8;
   return (VAR_7);
  }
 }




 VAR_7 = FUNC_2(VAR_8, VAR_4);
 if (VAR_7 == ((void*)0)) {



  FUNC_0(VAR_8);
  return (((void*)0));
 }
 VAR_7->opt.device = VAR_8;
 return (VAR_7);
}
