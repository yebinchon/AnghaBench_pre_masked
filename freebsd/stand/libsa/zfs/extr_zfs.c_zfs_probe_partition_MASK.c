
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfs_probe_args {char* devname; int fd; int secsz; int pool_guid; } ;
struct ptable_entry {scalar_t__ type; scalar_t__ start; scalar_t__ end; } ;
struct ptable {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct ptable*) ;
 int FUNC_3 (struct ptable*,struct zfs_probe_args*,int (*) (void*,char const*,struct ptable_entry const*)) ;
 struct ptable* FUNC_4 (struct zfs_probe_args*,scalar_t__,int ,int ) ;
 int FUNC_5 (char*,char*,char*,char const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 int VAR_3 ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int
FUNC_9(void *VAR_4, const char *VAR_5,
    const struct ptable_entry *VAR_6)
{
 struct zfs_probe_args *VAR_7, VAR_8;
 struct ptable *VAR_9;
 char VAR_10[32];
 int VAR_11;


 if (VAR_6->type != VAR_1 &&
     VAR_6->type != VAR_2)
  return (0);

 VAR_7 = (struct zfs_probe_args *)VAR_4;
 FUNC_7(VAR_10, VAR_7->devname, FUNC_6(VAR_7->devname) - 1);
 VAR_10[FUNC_6(VAR_7->devname) - 1] = '\0';
 FUNC_5(VAR_10, "%s%s:", VAR_10, VAR_5);
 VAR_8.fd = FUNC_1(VAR_10, VAR_0);
 if (VAR_8.fd == -1)
  return (0);
 VAR_11 = FUNC_8(VAR_8.fd, VAR_7->pool_guid);
 if (VAR_11 == 0)
  return (0);

 if (VAR_6->type == VAR_1) {
  VAR_8.devname = VAR_10;
  VAR_8.pool_guid = VAR_7->pool_guid;
  VAR_8.secsz = VAR_7->secsz;
  VAR_9 = FUNC_4(&VAR_8, VAR_6->end - VAR_6->start + 1,
      VAR_7->secsz, VAR_3);
  if (VAR_9 != ((void*)0)) {
   FUNC_3(VAR_9, &VAR_8, FUNC_9);
   FUNC_2(VAR_9);
  }
 }
 FUNC_0(VAR_8.fd);
 return (0);
}
