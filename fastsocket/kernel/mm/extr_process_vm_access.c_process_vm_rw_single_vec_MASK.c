
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pages {int dummy; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct iovec {int dummy; } ;
typedef scalar_t__ ssize_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (struct task_struct*,struct mm_struct*,struct page**,unsigned long,unsigned long,unsigned long,struct iovec const*,unsigned long,unsigned long*,size_t*,int,unsigned long,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_3,
        unsigned long VAR_4,
        const struct iovec *VAR_5,
        unsigned long VAR_6,
        unsigned long *VAR_7,
        size_t *VAR_8,
        struct page **VAR_9,
        struct mm_struct *VAR_10,
        struct task_struct *VAR_11,
        int VAR_12,
        ssize_t *VAR_13)
{
 unsigned long VAR_14 = VAR_3 & VAR_0;
 unsigned long VAR_15 = VAR_3 - VAR_14;
 unsigned long VAR_16;
 ssize_t VAR_17;
 ssize_t VAR_18 = 0;
 unsigned long VAR_19 = 0;
 unsigned long VAR_20;
 unsigned long VAR_21 = VAR_2
  / sizeof(struct pages *);

 *VAR_13 = 0;


 if (VAR_4 == 0)
  return 0;
 VAR_16 = (VAR_3 + VAR_4 - 1) / VAR_1 - VAR_3 / VAR_1 + 1;

 while ((VAR_19 < VAR_16) && (*VAR_7 < VAR_6)) {
  VAR_20 = FUNC_0(VAR_16 - VAR_19,
           VAR_21);

  VAR_18 = FUNC_1(VAR_11, VAR_10, VAR_9, VAR_14,
      VAR_15, VAR_4,
      VAR_5, VAR_6,
      VAR_7, VAR_8,
      VAR_12, VAR_20,
      &VAR_17);
  VAR_15 = 0;
  *VAR_13 += VAR_17;

  if (VAR_18 < 0) {
   return VAR_18;
  } else {
   VAR_4 -= VAR_17;
   VAR_19 += VAR_20;
   VAR_14 += VAR_20 * VAR_1;
  }
 }

 return VAR_18;
}
