
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ X_op; int X_add_number; } ;
struct TYPE_6__ {scalar_t__ pc_rel; TYPE_4__ exp; } ;
struct TYPE_10__ {int instruction; char* error; int relax_inst; int relax_size; TYPE_1__ reloc; } ;
struct TYPE_8__ {int bits; int* range; } ;
struct TYPE_7__ {int value; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_21 ;
 char* FUNC_1 (char*) ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 size_t VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int VAR_36 ;
 int FUNC_2 (char*) ;
 char* VAR_37 ;
 int FUNC_3 (char**,int,size_t) ;
 TYPE_5__ VAR_38 ;
 int FUNC_4 (TYPE_4__*,char**) ;
 int FUNC_5 (char**,int,int ) ;
 TYPE_3__* VAR_39 ;
 TYPE_2__* VAR_40 ;
 int FUNC_6 (char**) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int,int,int) ;
 int FUNC_9 (int ,unsigned int,int ) ;

__attribute__((used)) static void
FUNC_10 (char *VAR_41)
{
  int VAR_42 = 0;
  int VAR_43;
  int VAR_44;
  char * VAR_45;
  char *VAR_46;
  char *VAR_47;
  int VAR_48;
  int VAR_49 = 0;

  VAR_46 = VAR_41;
  FUNC_7 (VAR_41);

  if (((VAR_43 = FUNC_5 (&VAR_41, 20, VAR_20)) == (int) VAR_1)
      || (FUNC_6 (&VAR_41) == (int) VAR_1))
    return;


  if (*VAR_41 == '[')
    {
      VAR_41++;
      FUNC_7 (VAR_41);

      if ((VAR_48 = FUNC_5 (&VAR_41, 15, VAR_20)) == (int) VAR_1)
 return;


      VAR_43 = (VAR_43 == VAR_48);
      FUNC_7 (VAR_41);
      VAR_45 = VAR_41 + 1;


      if (*VAR_41 == ']')
        {
          VAR_41++;
          if (*VAR_41 == '+')
            {
              VAR_41++;

              if (FUNC_6 (&VAR_41) == VAR_21)
                {
                  if ((FUNC_3 (&VAR_41, 3, VAR_31) == (int) VAR_1)
                      || (FUNC_2 (VAR_41) == (int) VAR_1))
      return;

                  if (VAR_43)
                    {
                      unsigned int VAR_50 = VAR_38.instruction & VAR_18;

                      if ((VAR_50 == VAR_10)
                          || (VAR_50 == VAR_11)
                          || (VAR_50 == VAR_12)
                          || (VAR_50 == VAR_8)
                          || (VAR_50 == VAR_9))
                        {
                          VAR_38.error = FUNC_1("register same as write-back base");
                          return;
                        }
                    }

                  VAR_49 = VAR_38.instruction & VAR_18;
                  VAR_38.instruction &= ~VAR_18;
                  VAR_38.instruction |= VAR_40[VAR_49 * 3 + VAR_17].value;


                  if ((VAR_38.instruction & 0x3e000007) == 0x0e000000)
                    {

                      if ((((VAR_38.instruction >> 15) & 0x18) == 0)
                          && (((VAR_38.instruction >> 3) & 0xfff) == 4))
                        {

                          if ((((VAR_38.instruction >> 20) & 0x10) == 0x10))
                            {
                              VAR_38.relax_inst = 0x0000200a | (((VAR_38.instruction >> 20) & 0xf)
                                                              << 8) | 1 << 7 |
                                (((VAR_38.instruction >> 15) & 0x7) << 4);
                            }

                          else
                            {
                              VAR_38.relax_inst = 0x0000200a | (((VAR_38.instruction >> 20) & 0xf)
                                                              << 8) | 0 << 7 |
                                (((VAR_38.instruction >> 15) & 0x7) << 4);
                            }
                          VAR_38.relax_size = 2;
                        }
                    }
                  return;
                }

              else
                {
                  FUNC_0 (((void*)0));
                  if (FUNC_2 (VAR_41) == (int) VAR_1)
                    {
                      return;
                    }

                  VAR_42 = 1;
                  VAR_44 = FUNC_9 (VAR_38.reloc.exp.X_add_number, VAR_31, 0);
                  VAR_44 &= (1 << VAR_39[VAR_31].bits) - 1;
                  VAR_49 = VAR_38.instruction & VAR_18;
                  VAR_38.instruction &= ~VAR_18;
                  VAR_38.instruction |= VAR_40[VAR_49 * 3 + VAR_42].value;
                  VAR_38.instruction |= VAR_44 << 3;
                  VAR_38.relax_inst = 0x8000;
                  return;
                }
            }

          else
            {
              if (FUNC_2 (VAR_41) == (int) VAR_1)
  return;

              VAR_49 = VAR_38.instruction & VAR_18;
              VAR_38.instruction &= ~VAR_18;
              VAR_38.instruction |= VAR_40[VAR_49 * 3 + VAR_16].value;


              if (VAR_49 == VAR_9)
                {
                  VAR_38.relax_inst = VAR_2;
                }
              else if (VAR_49 == VAR_10)
                {
                  VAR_38.relax_inst = VAR_3;
                }
              else if (VAR_49 == VAR_12)
                {
                  VAR_38.relax_inst = VAR_4;
                }
              else if (VAR_49 == VAR_13)
                {
                  VAR_38.relax_inst = VAR_5;
                }
              else if (VAR_49 == VAR_14)
                {
                  VAR_38.relax_inst = VAR_6;
                }
              else if (VAR_49 == VAR_15)
                {
                  VAR_38.relax_inst = VAR_7;
                }
              else
                {
                  VAR_38.relax_inst = 0x8000;
                }


              if ((VAR_49 == VAR_9)
                  || (VAR_49 == VAR_10)
                  || (VAR_49 == VAR_12)
                  || (VAR_49 == VAR_13) || (VAR_49 == VAR_14) || (VAR_49 == VAR_15))
                {
                  if ((((VAR_38.instruction >> 15) & 0x10) == 0) && (((VAR_38.instruction >> 20) & 0x10) == 0))
                    {
                      VAR_38.relax_inst |= (2 << 12) | (((VAR_38.instruction >> 20) & 0xf) << 8) |
                        (((VAR_38.instruction >> 15) & 0xf) << 4);
                      VAR_38.relax_size = 2;
                    }
                }

              return;
            }
        }

      else
        {
          if (FUNC_6 (&VAR_41) == (int) VAR_1)
            {
              VAR_38.error = FUNC_1("pre-indexed expression expected");
              return;
            }

          if (FUNC_4 (&VAR_38.reloc.exp, &VAR_41) == (int) VAR_1)
     return;

          FUNC_7 (VAR_41);
          if (*VAR_41++ != ']')
            {
              VAR_38.error = FUNC_1("missing ]");
              return;
            }

          FUNC_7 (VAR_41);

          if (*VAR_41 == '+')
            {
              VAR_41++;
              VAR_42 = 1;
              if (VAR_43)
                {
                  unsigned int VAR_51 = VAR_38.instruction & VAR_18;

                  if ((VAR_51 == VAR_10)
                      || (VAR_51 == VAR_11)
                      || (VAR_51 == VAR_12)
                      || (VAR_51 == VAR_8)
                      || (VAR_51 == VAR_9))
                    {
                      VAR_38.error = FUNC_1("register same as write-back base");
                      return;
                    }
                }
            }

          if (FUNC_2 (VAR_41) == (int) VAR_1)
     return;

          if (VAR_38.reloc.exp.X_op == VAR_19)
            {
              int VAR_52;
              unsigned int VAR_53;

              if (VAR_42 == 1)
                VAR_53 = VAR_31;
              else
                VAR_53 = VAR_33;
              VAR_47 = VAR_45;

              if ((*VAR_47 == '0') && (*(VAR_47 + 1) == 'x')
                  && (VAR_53 != VAR_34)
                  && (VAR_53 != VAR_35)
                  && (VAR_53 != VAR_36)
                  && (VAR_53 != VAR_25)
                  && (VAR_53 != VAR_24)
                  && (VAR_53 != VAR_23)
                  && (VAR_53 != VAR_26)
                  && (VAR_53 != VAR_27)
                  && (VAR_53 != VAR_30)
                  && (VAR_53 != VAR_28)
                  && (VAR_53 != VAR_29)
                  && (VAR_53 != VAR_32)
                  && (VAR_53 != VAR_22))
                {
                  VAR_53 += 24;
                }

              VAR_52 = FUNC_9 (VAR_38.reloc.exp.X_add_number, VAR_53, 0);
              if (VAR_52 == (int) VAR_1)
                {
                  if (VAR_53 < 30)
                    FUNC_8 (VAR_37,
                             FUNC_1("invalid constant: %d bit expression not in range %d..%d"),
                             VAR_39[VAR_53].bits,
                             VAR_39[VAR_53].range[0], VAR_39[VAR_53].range[1]);
                  else
                    FUNC_8 (VAR_37,
                             FUNC_1("invalid constant: %d bit expression not in range %d..%d"),
                             VAR_39[VAR_53 - 24].bits,
                             VAR_39[VAR_53 - 24].range[0],
                             VAR_39[VAR_53 - 24].range[1]);
                  VAR_38.error = VAR_37;
                  return;
                }

              VAR_52 &= (1 << VAR_39[VAR_53].bits) - 1;
              VAR_49 = VAR_38.instruction & VAR_18;
              VAR_38.instruction &= ~VAR_18;
              VAR_38.instruction |= VAR_40[VAR_49 * 3 + VAR_42].value;
              if (VAR_42 == 1)
                VAR_38.instruction |= VAR_52 << 3;
              else
                VAR_38.instruction |= VAR_52;


              if ((VAR_38.instruction & 0x3e000000) == 0x20000000)
                {

                  if ((((VAR_38.instruction >> 15) & 0x10) == 0)
                      && (((VAR_38.instruction >> 20) & 0x10) == 0))
                    {

                      if ((VAR_38.instruction & 0x7fff) == 0)
                        {
                          VAR_38.relax_inst |= (((VAR_38.instruction >> 15) & 0xf) << 4)
                            | (((VAR_38.instruction >> 20) & 0xf) << 8);
                          VAR_38.relax_size = 2;
                        }

                      else if ((((VAR_38.instruction >> 15) & 0xf) == 2)
                               && ((VAR_38.instruction & 0x3) == 0)
                               && ((VAR_38.instruction & 0x7fff) < 128))
                        {
                          VAR_38.relax_inst = 0x7000 | (((VAR_38.instruction >> 20) & 0xf) << 8)
                            | (((VAR_38.instruction & 0x7fff) >> 2) << 3);
                          VAR_38.relax_size = 2;
                        }
                      else
                        {
                          VAR_38.relax_inst = 0x8000;
                        }
                    }
                  else
                    {
                      VAR_38.relax_inst = 0x8000;
                    }
                }

              else if ((VAR_38.instruction & 0x3e000000) == 0x28000000)
                {

                  if ((((VAR_38.instruction >> 15) & 0x10) == 0) && (((VAR_38.instruction >> 20) & 0x10) == 0))
                    {

                      if ((VAR_38.instruction & 0x7fff) == 0)
                        {
                          VAR_38.relax_inst |= (((VAR_38.instruction >> 15) & 0xf) << 4)
                            | (((VAR_38.instruction >> 20) & 0xf) << 8);
                          VAR_38.relax_size = 2;
                        }

                      else if ((((VAR_38.instruction >> 15) & 0xf) == 2)
                               && ((VAR_38.instruction & 0x3) == 0)
                               && ((VAR_38.instruction & 0x7fff) < 128))
                        {
                          VAR_38.relax_inst = 0x7004 | (((VAR_38.instruction >> 20) & 0xf) << 8)
                            | (((VAR_38.instruction & 0x7fff) >> 2) << 3);
                          VAR_38.relax_size = 2;
                        }
                      else
                        {
                          VAR_38.relax_inst = 0x8000;
                        }
                    }
                  else
                    {
                      VAR_38.relax_inst = 0x8000;
                    }
                }

              else if ((VAR_38.instruction & 0x3e000007) == 0x06000004)
                {

                  if ((((VAR_38.instruction >> 15) & 0x18) == 0)
                      && (((VAR_38.instruction >> 3) & 0xfff) == 0xffc))
                    {

                      if ((((VAR_38.instruction >> 20) & 0x10) == 0x10))
                        {
                          VAR_38.relax_inst = 0x0000200e | (((VAR_38.instruction >> 20) & 0xf) << 8)
                            | 1 << 7 | (((VAR_38.instruction >> 15) & 0x7) << 4);
                          VAR_38.relax_size = 2;
                        }

                      else
                        {
                          VAR_38.relax_inst = 0x0000200e | (((VAR_38.instruction >> 20) & 0xf) << 8)
                            | 0 << 7 | (((VAR_38.instruction >> 15) & 0x7) << 4);
                          VAR_38.relax_size = 2;
                        }
                    }
                  else
                    {
                      VAR_38.relax_inst = 0x8000;
                    }
                }

              else if ((VAR_38.instruction & 0x3e000000) == 0x22000000)
                {

                  if ((((VAR_38.instruction >> 15) & 0x10) == 0) && (((VAR_38.instruction >> 20) & 0x10) == 0))
                    {

                      if ((VAR_38.instruction & 0x7fff) == 0)
                        {
                          VAR_38.relax_inst |= (((VAR_38.instruction >> 15) & 0xf) << 4)
                            | (((VAR_38.instruction >> 20) & 0xf) << 8);
                          VAR_38.relax_size = 2;
                        }

                      else if ((((VAR_38.instruction >> 15) & 0xf) == 2)
                               && ((VAR_38.instruction & 0x1) == 0)
                               && ((VAR_38.instruction & 0x7fff) < 64))
                        {
                          VAR_38.relax_inst = 0x7001 | (((VAR_38.instruction >> 20) & 0xf) << 8)
                            | (((VAR_38.instruction & 0x7fff) >> 1) << 3);
                          VAR_38.relax_size = 2;
                        }
                      else
                        {
                          VAR_38.relax_inst = 0x8000;
                        }
                    }
                  else
                    {
                      VAR_38.relax_inst = 0x8000;
                    }
                }

              else if ((VAR_38.instruction & 0x3e000000) == 0x2a000000)
                {

                  if ((((VAR_38.instruction >> 15) & 0x10) == 0) && (((VAR_38.instruction >> 20) & 0x10) == 0))
                    {

                      if ((VAR_38.instruction & 0x7fff) == 0)
                        {
                          VAR_38.relax_inst |= (((VAR_38.instruction >> 15) & 0xf) << 4)
                            | (((VAR_38.instruction >> 20) & 0xf) << 8);
                          VAR_38.relax_size = 2;
                        }

                      else if ((((VAR_38.instruction >> 15) & 0xf) == 2)
                               && ((VAR_38.instruction & 0x1) == 0)
                               && ((VAR_38.instruction & 0x7fff) < 64))
                        {
                          VAR_38.relax_inst = 0x7005 | (((VAR_38.instruction >> 20) & 0xf) << 8)
                            | (((VAR_38.instruction & 0x7fff) >> 1) << 3);
                          VAR_38.relax_size = 2;
                        }
                      else
                        {
                          VAR_38.relax_inst = 0x8000;
                        }
                    }
                  else
                    {
                      VAR_38.relax_inst = 0x8000;
                    }
                }

              else if ((VAR_38.instruction & 0x3e000000) == 0x2c000000)
                {

                  if ((((VAR_38.instruction >> 15) & 0x10) == 0) && (((VAR_38.instruction >> 20) & 0x10) == 0))
                    {

                      if ((VAR_38.instruction & 0x7fff) == 0)
                        {
                          VAR_38.relax_inst |= (((VAR_38.instruction >> 15) & 0xf) << 4)
                            | (((VAR_38.instruction >> 20) & 0xf) << 8);
                          VAR_38.relax_size = 2;
                        }

                      else if ((((VAR_38.instruction >> 15) & 0xf) == 2)
                               && ((VAR_38.instruction & 0x7fff) < 32))
                        {
                          VAR_38.relax_inst = 0x7003 | (((VAR_38.instruction >> 20) & 0xf) << 8)
                            | ((VAR_38.instruction & 0x7fff) << 3);
                          VAR_38.relax_size = 2;
                        }
                      else
                        {
                          VAR_38.relax_inst = 0x8000;
                        }
                    }
                  else
                    {
                      VAR_38.relax_inst = 0x8000;
                    }
                }

              else if ((VAR_38.instruction & 0x3e000000) == 0x2e000000)
                {

                  if ((((VAR_38.instruction >> 15) & 0x10) == 0) && (((VAR_38.instruction >> 20) & 0x10) == 0))
                    {

                      if ((VAR_38.instruction & 0x7fff) == 0)
                        {
                          VAR_38.relax_inst |= (((VAR_38.instruction >> 15) & 0xf) << 4)
                            | (((VAR_38.instruction >> 20) & 0xf) << 8);
                          VAR_38.relax_size = 2;
                        }

                      else if ((((VAR_38.instruction >> 15) & 0xf) == 2)
                               && ((VAR_38.instruction & 0x7fff) < 32))
                        {
                          VAR_38.relax_inst = 0x7007 | (((VAR_38.instruction >> 20) & 0xf) << 8)
                            | ((VAR_38.instruction & 0x7fff) << 3);
                          VAR_38.relax_size = 2;
                        }
                      else
                        {
                          VAR_38.relax_inst = 0x8000;
                        }
                    }
                  else
                    {
                      VAR_38.relax_inst = 0x8000;
                    }
                }
              else
                {
                  VAR_38.relax_inst = 0x8000;
                }

              return;
            }
          else
            {

              VAR_38.reloc.pc_rel = 0;
            }
        }
    }
  else
    {
      VAR_38.error = VAR_0;
    }
}
