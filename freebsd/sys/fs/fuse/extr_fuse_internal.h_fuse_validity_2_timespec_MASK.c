
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;
struct fuse_entry_out {scalar_t__ entry_valid; int entry_valid_nsec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct timespec*) ;
 int FUNC_1 (struct timespec*,struct timespec*,struct timespec*) ;

__attribute__((used)) static inline void
FUNC_2(const struct fuse_entry_out *VAR_1,
 struct timespec *VAR_2)
{
 struct timespec VAR_3, VAR_4;

 FUNC_0(&VAR_4);

 if (VAR_1->entry_valid >= VAR_0 ||
     VAR_1->entry_valid + VAR_4.tv_sec + 2 >= VAR_0) {
  VAR_2->tv_sec = VAR_0;
 } else {
  VAR_3.tv_sec = VAR_1->entry_valid;
  VAR_3.tv_nsec = VAR_1->entry_valid_nsec;
  FUNC_1(&VAR_3, &VAR_4, VAR_2);
 }
}
