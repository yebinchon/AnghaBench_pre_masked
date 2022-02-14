
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct timeval {long tv_sec; long tv_usec; } const timeval ;
typedef long int64_t ;


 int const VAR_0 ;
 long const VAR_1 ;

__attribute__((used)) static inline
struct timeval
FUNC_0(const int64_t VAR_2, const int VAR_3)
{
 struct timeval VAR_4;
 long VAR_5;
        const static struct timeval VAR_6;

        if (VAR_2 == 0)
                return VAR_6;

 VAR_4.tv_sec = VAR_2 / VAR_1;
 VAR_5 = (VAR_2 % VAR_1);


 if (VAR_3 == VAR_0)
  VAR_4.tv_usec = VAR_5;
 else
  VAR_4.tv_usec = VAR_5 / 1000;

 return VAR_4;
}
