
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct zfs_probe_args {int fd; scalar_t__ secsz; char const* devname; scalar_t__* pool_guid; } ;
struct ptable {int dummy; } ;
struct disk_devdesc {int d_partition; int d_slice; } ;
struct TYPE_2__ {scalar_t__ (* arch_getdev ) (void**,char const*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct disk_devdesc*) ;
 int FUNC_2 (int,int ,scalar_t__*) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (struct ptable*) ;
 int FUNC_5 (struct ptable*,struct zfs_probe_args*,int ) ;
 struct ptable* FUNC_6 (struct zfs_probe_args*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (void**,char const*,int *) ;
 int VAR_7 ;
 int FUNC_8 (int,scalar_t__*) ;
 int VAR_8 ;

int
FUNC_9(const char *VAR_9, uint64_t *VAR_10)
{
 struct disk_devdesc *VAR_11;
 struct ptable *VAR_12;
 struct zfs_probe_args VAR_13;
 uint64_t VAR_14;
 int VAR_15;

 if (VAR_10)
  *VAR_10 = 0;
 VAR_13.fd = FUNC_3(VAR_9, VAR_5);
 if (VAR_13.fd == -1)
  return (VAR_4);





 if (VAR_6.arch_getdev((void **)&VAR_11, VAR_9, ((void*)0)) == 0) {
  int VAR_16 = VAR_11->d_partition;
  int VAR_17 = VAR_11->d_slice;

  FUNC_1(VAR_11);
  if (VAR_16 != VAR_2 && VAR_17 != VAR_3) {
   VAR_15 = FUNC_8(VAR_13.fd, VAR_10);
   if (VAR_15 == 0)
    return (0);
  }
 }


 VAR_15 = FUNC_2(VAR_13.fd, VAR_0, &VAR_14);
 if (VAR_15 == 0)
  VAR_15 = FUNC_2(VAR_13.fd, VAR_1, &VAR_13.secsz);
 if (VAR_15 == 0) {
  VAR_13.devname = VAR_9;
  VAR_13.pool_guid = VAR_10;
  VAR_12 = FUNC_6(&VAR_13, VAR_14 / VAR_13.secsz, VAR_13.secsz,
      VAR_7);
  if (VAR_12 != ((void*)0)) {
   FUNC_5(VAR_12, &VAR_13, VAR_8);
   FUNC_4(VAR_12);
  }
 }
 FUNC_0(VAR_13.fd);
 if (VAR_10 && *VAR_10 == 0)
  VAR_15 = VAR_4;
 return (VAR_15);
}
