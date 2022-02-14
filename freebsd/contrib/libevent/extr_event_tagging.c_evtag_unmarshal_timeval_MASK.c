
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct evbuffer {int dummy; } ;
typedef scalar_t__ ev_uint32_t ;


 int FUNC_0 (scalar_t__*,struct evbuffer*,int) ;
 int FUNC_1 (struct evbuffer*,int) ;
 int FUNC_2 (struct evbuffer*,scalar_t__*) ;

int
FUNC_3(struct evbuffer *VAR_0, ev_uint32_t VAR_1,
    struct timeval *VAR_2)
{
 ev_uint32_t VAR_3;
 ev_uint32_t VAR_4;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = -1;

 if ((VAR_5 = FUNC_2(VAR_0, &VAR_3)) == -1)
  return (-1);
 if (VAR_3 != VAR_1)
  goto done;
 if ((VAR_6 = FUNC_0(&VAR_4, VAR_0, 0)) == -1)
  goto done;
 VAR_2->tv_sec = VAR_4;
 if ((VAR_7 = FUNC_0(&VAR_4, VAR_0, VAR_6)) == -1)
  goto done;
 VAR_2->tv_usec = VAR_4;
 if (VAR_6 + VAR_7 > VAR_5)
  goto done;

 VAR_8 = 0;
 done:
 FUNC_1(VAR_0, VAR_5);
 return VAR_8;
}
