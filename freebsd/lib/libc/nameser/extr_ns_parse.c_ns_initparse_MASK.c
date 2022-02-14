
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int ns_sect ;
struct TYPE_4__ {scalar_t__ _id; scalar_t__ _flags; scalar_t__* _counts; int const** _sections; int const* _eom; int const* _msg; } ;
typedef TYPE_1__ ns_msg ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int const*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int const*,int const*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int) ;

int
FUNC_4(const u_char *VAR_3, int VAR_4, ns_msg *VAR_5) {
 const u_char *VAR_6 = VAR_3 + VAR_4;
 int VAR_7;

 VAR_5->_msg = VAR_3;
 VAR_5->_eom = VAR_6;
 if (VAR_3 + VAR_1 > VAR_6)
  FUNC_1(VAR_0);
 FUNC_0(VAR_5->_id, VAR_3);
 if (VAR_3 + VAR_1 > VAR_6)
  FUNC_1(VAR_0);
 FUNC_0(VAR_5->_flags, VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_3 + VAR_1 > VAR_6)
   FUNC_1(VAR_0);
  FUNC_0(VAR_5->_counts[VAR_7], VAR_3);
 }
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  if (VAR_5->_counts[VAR_7] == 0)
   VAR_5->_sections[VAR_7] = ((void*)0);
  else {
   int VAR_8 = FUNC_2(VAR_3, VAR_6, (ns_sect)VAR_7,
       VAR_5->_counts[VAR_7]);

   if (VAR_8 < 0)
    return (-1);
   VAR_5->_sections[VAR_7] = VAR_3;
   VAR_3 += VAR_8;
  }
 if (VAR_3 != VAR_6)
  FUNC_1(VAR_0);
 FUNC_3(VAR_5, VAR_2);
 return (0);
}
