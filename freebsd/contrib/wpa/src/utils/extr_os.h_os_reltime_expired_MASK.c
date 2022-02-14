
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_reltime {scalar_t__ sec; scalar_t__ usec; } ;
typedef scalar_t__ os_time_t ;


 int FUNC_0 (struct os_reltime*,struct os_reltime*,struct os_reltime*) ;

__attribute__((used)) static inline int FUNC_1(struct os_reltime *VAR_0,
         struct os_reltime *VAR_1,
         os_time_t VAR_2)
{
 struct os_reltime VAR_3;

 FUNC_0(VAR_0, VAR_1, &VAR_3);
 return (VAR_3.sec > VAR_2) ||
        (VAR_3.sec == VAR_2 && VAR_3.usec > 0);
}
