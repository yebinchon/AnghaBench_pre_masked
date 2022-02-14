
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int _position; } ;
typedef TYPE_1__ ldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int
FUNC_4(ldns_buffer *VAR_1)
{
 if (!FUNC_0(VAR_1, VAR_1->_position, sizeof(uint8_t))) {
  FUNC_3(VAR_1, FUNC_1(VAR_1));

  return VAR_0;
 }
 return (int)FUNC_2(VAR_1);
}
