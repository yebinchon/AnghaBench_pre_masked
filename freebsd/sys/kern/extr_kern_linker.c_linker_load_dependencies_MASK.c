
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct mod_version {int mv_version; } ;
struct mod_metadata {scalar_t__ md_type; char* md_cval; struct mod_depend* md_data; } ;
struct mod_depend {int dummy; } ;
typedef TYPE_1__* modlist_t ;
typedef TYPE_2__* linker_file_t ;
struct TYPE_13__ {char* filename; int refs; } ;
struct TYPE_12__ {TYPE_2__* container; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,struct mod_metadata**,struct mod_metadata**,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,struct mod_metadata***,struct mod_metadata***,int *) ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (int *,char const*,TYPE_2__*,struct mod_depend const*,int *) ;
 TYPE_1__* FUNC_4 (char const*,int) ;
 TYPE_1__* FUNC_5 (char const*,struct mod_depend const*) ;
 int FUNC_6 (char*,char const*,...) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 int FUNC_8 (int *,int ) ;

int
FUNC_9(linker_file_t VAR_7)
{
 linker_file_t VAR_8;
 struct mod_metadata **VAR_9, **VAR_10, **VAR_11, **VAR_12;
 struct mod_metadata *VAR_13, *VAR_14;
 const struct mod_depend *VAR_15;
 modlist_t VAR_16;
 const char *VAR_17, *VAR_18;
 int VAR_19, VAR_20 = 0;




 FUNC_8(&VAR_5, VAR_4);
 if (VAR_6) {
  VAR_6->refs++;
  VAR_20 = FUNC_1(VAR_7, VAR_6);
  if (VAR_20)
   return (VAR_20);
 }
 if (FUNC_2(VAR_7, VAR_2, &VAR_9, &VAR_10,
     ((void*)0)) != 0)
  return (0);
 for (VAR_11 = VAR_9; VAR_11 < VAR_10; VAR_11++) {
  VAR_13 = *VAR_11;
  if (VAR_13->md_type != VAR_3)
   continue;
  VAR_17 = VAR_13->md_cval;
  VAR_19 = ((const struct mod_version *)VAR_13->md_data)->mv_version;
  VAR_16 = FUNC_4(VAR_17, VAR_19);
  if (VAR_16 != ((void*)0)) {
   FUNC_6("interface %s.%d already present in the KLD"
       " '%s'!\n", VAR_17, VAR_19,
       VAR_16->container->filename);
   return (VAR_0);
  }
 }

 for (VAR_11 = VAR_9; VAR_11 < VAR_10; VAR_11++) {
  VAR_13 = *VAR_11;
  if (VAR_13->md_type != VAR_1)
   continue;
  VAR_17 = VAR_13->md_cval;
  VAR_15 = VAR_13->md_data;
  VAR_18 = ((void*)0);
  for (VAR_12 = VAR_9; VAR_12 < VAR_10; VAR_12++) {
   VAR_14 = *VAR_12;
   if (VAR_14->md_type != VAR_3)
    continue;
   VAR_18 = VAR_14->md_cval;
   if (FUNC_7(VAR_17, VAR_18) == 0)
    break;
  }
  if (VAR_12 < VAR_10)
   continue;
  VAR_16 = FUNC_5(VAR_17, VAR_15);
  if (VAR_16) {
   VAR_8 = VAR_16->container;
   VAR_8->refs++;
   VAR_20 = FUNC_1(VAR_7, VAR_8);
   if (VAR_20)
    break;
   continue;
  }
  VAR_20 = FUNC_3(((void*)0), VAR_17, VAR_7, VAR_15, ((void*)0));
  if (VAR_20) {
   FUNC_6("KLD %s: depends on %s - not available or"
       " version mismatch\n", VAR_7->filename, VAR_17);
   break;
  }
 }

 if (VAR_20)
  return (VAR_20);
 FUNC_0(VAR_7, VAR_9, VAR_10, 0);
 return (VAR_20);
}
