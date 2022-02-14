
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct archive_write_disk {scalar_t__ user_uid; int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int,int,char const*,scalar_t__,long,scalar_t__,long) ;
 scalar_t__ FUNC_2 (int,int,char const*,scalar_t__,long,scalar_t__,long,scalar_t__,long) ;

__attribute__((used)) static int
FUNC_3(struct archive_write_disk *VAR_3,
    int VAR_4, int VAR_5, const char *VAR_6,
    time_t VAR_7, long VAR_8,
    time_t VAR_9, long VAR_10,
    time_t VAR_11, long VAR_12,
    time_t VAR_13, long VAR_14)
{


 int VAR_15 = 0, VAR_16 = 0;
 (void)VAR_13;
 (void)VAR_14;
 (void)VAR_9;
 (void)VAR_10;

 VAR_16 = FUNC_1(VAR_4, VAR_5, VAR_6,
        VAR_7, VAR_8,
        VAR_11, VAR_12);
 if (VAR_15 != 0 || VAR_16 != 0) {
  FUNC_0(&VAR_3->archive, VAR_2,
      "Can't restore time");
  return (VAR_1);
 }
 return (VAR_0);
}
