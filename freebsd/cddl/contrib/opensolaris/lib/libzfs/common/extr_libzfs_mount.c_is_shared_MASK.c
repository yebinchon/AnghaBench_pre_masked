
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_share_type_t ;
typedef size_t zfs_share_proto_t ;
struct TYPE_4__ {int * libzfs_sharetab; } ;
typedef TYPE_1__ libzfs_handle_t ;
typedef int buf ;
struct TYPE_5__ {char const* p_name; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_2__* VAR_5 ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char const*) ;

__attribute__((used)) static zfs_share_type_t
FUNC_4(libzfs_handle_t *VAR_6, const char *VAR_7, zfs_share_proto_t VAR_8)
{
 char VAR_9[VAR_0], *VAR_10;
 char *VAR_11;

 if (VAR_6->libzfs_sharetab == ((void*)0))
  return (VAR_3);

 (void) FUNC_1(VAR_6->libzfs_sharetab, 0, VAR_1);

 while (FUNC_0(VAR_9, sizeof (VAR_9), VAR_6->libzfs_sharetab) != ((void*)0)) {


  if ((VAR_10 = FUNC_2(VAR_9, '\t')) == ((void*)0))
   continue;

  *VAR_10 = '\0';
  if (FUNC_3(VAR_9, VAR_7) == 0) {
   if (VAR_8 == 129)
    return (VAR_2);

  }
 }

 return (VAR_3);
}
