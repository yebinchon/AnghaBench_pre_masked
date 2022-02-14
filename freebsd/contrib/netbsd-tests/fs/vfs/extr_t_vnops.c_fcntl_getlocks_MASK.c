
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {scalar_t__ member_0; scalar_t__ member_1; scalar_t__ member_4; scalar_t__ l_type; scalar_t__ l_whence; scalar_t__ l_start; scalar_t__ l_len; int member_3; int member_2; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,int ,struct flock const*) ;

__attribute__((used)) static unsigned int
FUNC_3(int VAR_4, off_t VAR_5, off_t VAR_6,
    struct flock *VAR_7, struct flock *VAR_8)
{
 unsigned int VAR_9 = 0;
 const struct flock VAR_10 = { VAR_5, VAR_6, 0, VAR_1, VAR_3 };

 if (VAR_7 == VAR_8)
  return VAR_9;

 FUNC_1(FUNC_2(VAR_4, VAR_0, &VAR_10));

 if (VAR_10.l_type == VAR_2)
  return VAR_9;

 *VAR_7++ = VAR_10;
 VAR_9 += 1;

 FUNC_0(VAR_10.l_whence == VAR_3);

 if (VAR_10.l_start > VAR_5) {
  unsigned int VAR_11 =
      FUNC_3(VAR_4, VAR_5, VAR_10.l_start - VAR_5, VAR_7, VAR_8);
  VAR_9 += VAR_11;
  VAR_7 += VAR_11;
  if (VAR_7 == VAR_8)
   return VAR_9;
 }

 if (VAR_10.l_len == 0)
  return VAR_9;

 if (VAR_6 == 0) {
  VAR_9 += FUNC_3(VAR_4, VAR_10.l_start + VAR_10.l_len, VAR_6, VAR_7, VAR_8);
 } else if (VAR_10.l_start + VAR_10.l_len < VAR_5 + VAR_6) {
  VAR_6 -= VAR_10.l_start + VAR_10.l_len - VAR_5;
  VAR_9 += FUNC_3(VAR_4, VAR_10.l_start + VAR_10.l_len, VAR_6, VAR_7, VAR_8);
 }

 return VAR_9;
}
