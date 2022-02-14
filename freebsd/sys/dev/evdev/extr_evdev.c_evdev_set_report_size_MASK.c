
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {size_t ev_report_size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;

int
FUNC_0(struct evdev_dev *VAR_11, size_t VAR_12)
{
 if (VAR_12 > VAR_3 + VAR_8 + VAR_0 + VAR_5 * VAR_7 +
     VAR_6 + VAR_4 + VAR_9 + VAR_10 + VAR_2)
  return (VAR_1);

 VAR_11->ev_report_size = VAR_12;
 return (0);
}
