
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct elink_vars {int eee_status; } ;
struct elink_params {int eee_mode; } ;
typedef int elink_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct elink_params*,struct elink_vars*) ;

__attribute__((used)) static elink_status_t FUNC_1(struct elink_params *VAR_5,
         struct elink_vars *VAR_6, uint8_t VAR_7)
{
 VAR_6->eee_status |= ((uint32_t) VAR_7) << VAR_4;


 if (VAR_5->eee_mode & VAR_1)
  VAR_6->eee_status |= VAR_2;
 else
  VAR_6->eee_status &= ~VAR_2;

 if (VAR_5->eee_mode & VAR_0)
  VAR_6->eee_status |= VAR_3;
 else
  VAR_6->eee_status &= ~VAR_3;

 return FUNC_0(VAR_5, VAR_6);
}
