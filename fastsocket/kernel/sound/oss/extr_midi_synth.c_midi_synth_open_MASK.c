
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct midi_input_info {int m_prev_status; scalar_t__ m_left; scalar_t__ m_ptr; int m_state; scalar_t__ m_busy; } ;
struct TYPE_4__ {int (* open ) (int,int,int ,int ) ;struct midi_input_info in_info; } ;
struct TYPE_3__ {int midi_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 TYPE_2__** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_0 (int,int,int ,int ) ;
 TYPE_1__** VAR_8 ;
 scalar_t__* VAR_9 ;

int
FUNC_1(int VAR_10, int VAR_11)
{
 int VAR_12 = VAR_8[VAR_10]->midi_dev;
 int VAR_13;
 struct midi_input_info *VAR_14;

 if (VAR_12 < 0 || VAR_12 > VAR_6 || VAR_3[VAR_12] == ((void*)0))
  return -VAR_0;

 VAR_2[VAR_12] = VAR_10;
 VAR_9[VAR_10] = 0;
 VAR_7[VAR_12] = 0;

 if ((VAR_13 = VAR_3[VAR_12]->open(VAR_12, VAR_11,
          VAR_4, VAR_5)) < 0)
  return VAR_13;
 VAR_14 = &VAR_3[VAR_12]->in_info;




 VAR_14->m_busy = 0;
 VAR_14->m_state = VAR_1;
 VAR_14->m_ptr = 0;
 VAR_14->m_left = 0;
 VAR_14->m_prev_status = 0x00;


 return 1;
}
