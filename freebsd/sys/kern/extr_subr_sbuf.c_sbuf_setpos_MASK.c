
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {scalar_t__ s_size; scalar_t__ s_len; } ;
typedef scalar_t__ ssize_t ;
typedef int intmax_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*,int ) ;

int
FUNC_4(struct sbuf *VAR_0, ssize_t VAR_1)
{

 FUNC_2(VAR_0);
 FUNC_3(VAR_0, 0);

 FUNC_0(VAR_1 >= 0,
     ("attempt to seek to a negative position (%jd)", (intmax_t)VAR_1));
 FUNC_0(VAR_1 < VAR_0->s_size,
     ("attempt to seek past end of sbuf (%jd >= %jd)",
     (intmax_t)VAR_1, (intmax_t)VAR_0->s_size));
 FUNC_0(!FUNC_1(VAR_0),
     ("attempt to seek when in a section"));

 if (VAR_1 < 0 || VAR_1 > VAR_0->s_len)
  return (-1);
 VAR_0->s_len = VAR_1;
 return (0);
}
