
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_boolean_t ;
struct TYPE_4__ {unsigned int limit; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 unsigned int FUNC_3 (TYPE_1__*,unsigned char const*,unsigned int,int ) ;

unsigned int
FUNC_4(const unsigned char *VAR_1, unsigned int VAR_2,
       isc_boolean_t VAR_3)
{
 FUNC_0(VAR_0 != ((void*)0) && FUNC_2(VAR_0));
 FUNC_1(VAR_2 <= VAR_0->limit);

 return (FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3));
}
