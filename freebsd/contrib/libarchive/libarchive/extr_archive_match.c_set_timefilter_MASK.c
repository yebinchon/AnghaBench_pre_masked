
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* time_t ;
struct archive_match {int newer_mtime_filter; long newer_mtime_nsec; int older_mtime_filter; long older_mtime_nsec; int newer_ctime_filter; long newer_ctime_nsec; int older_ctime_filter; long older_ctime_nsec; int setflag; void* older_ctime_sec; void* newer_ctime_sec; void* older_mtime_sec; void* newer_mtime_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_1(struct archive_match *VAR_6, int VAR_7,
    time_t VAR_8, long VAR_9, time_t VAR_10, long VAR_11)
{
 if (VAR_7 & VAR_1) {
  if ((VAR_7 & VAR_2) || FUNC_0(VAR_7)) {
   VAR_6->newer_mtime_filter = VAR_7;
   VAR_6->newer_mtime_sec = VAR_8;
   VAR_6->newer_mtime_nsec = VAR_9;
   VAR_6->setflag |= VAR_5;
  }
  if ((VAR_7 & VAR_3) || FUNC_0(VAR_7)) {
   VAR_6->older_mtime_filter = VAR_7;
   VAR_6->older_mtime_sec = VAR_8;
   VAR_6->older_mtime_nsec = VAR_9;
   VAR_6->setflag |= VAR_5;
  }
 }
 if (VAR_7 & VAR_0) {
  if ((VAR_7 & VAR_2) || FUNC_0(VAR_7)) {
   VAR_6->newer_ctime_filter = VAR_7;
   VAR_6->newer_ctime_sec = VAR_10;
   VAR_6->newer_ctime_nsec = VAR_11;
   VAR_6->setflag |= VAR_5;
  }
  if ((VAR_7 & VAR_3) || FUNC_0(VAR_7)) {
   VAR_6->older_ctime_filter = VAR_7;
   VAR_6->older_ctime_sec = VAR_10;
   VAR_6->older_ctime_nsec = VAR_11;
   VAR_6->setflag |= VAR_5;
  }
 }
 return (VAR_4);
}
