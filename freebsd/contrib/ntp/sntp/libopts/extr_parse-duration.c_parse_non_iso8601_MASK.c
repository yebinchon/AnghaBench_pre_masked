
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ whats_done_t ;
typedef scalar_t__ time_t ;
typedef char cch_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_4 (char*,char**,int) ;

__attribute__((used)) static time_t
FUNC_5 (cch_t * VAR_17)
{
  whats_done_t VAR_18 = VAR_6;

  time_t VAR_19 = 0;

  do {
    time_t VAR_20;

    VAR_16 = 0;
    VAR_20 = FUNC_4 (VAR_17, &VAR_17, 10);
    if (VAR_16 != 0)
      goto bad_time;





    if (*VAR_17 == ':')
      {
        if (VAR_18 >= VAR_4)
          break;

        VAR_20 = FUNC_2 (VAR_20, VAR_17);

        if ((VAR_18 == VAR_3) && (VAR_20 >= VAR_9))
          break;

        return FUNC_3 (VAR_19, VAR_20, 1);
      }

    {
      unsigned int VAR_21;


      while (FUNC_1 ((unsigned char)*VAR_17))
        VAR_17++;

      switch (*VAR_17)
        {
        default: goto bad_time;
        case 128:
          return FUNC_3 (VAR_19, VAR_20, 1);

        case 'y': case 'Y':
          if (VAR_18 >= VAR_15)
            goto bad_time;
          VAR_21 = VAR_13;
          VAR_18 = VAR_15;
          break;

        case 'M':
          if (VAR_18 >= VAR_5)
            goto bad_time;
          VAR_21 = VAR_11;
          VAR_18 = VAR_5;
          break;

        case 'W':
          if (VAR_18 >= VAR_14)
            goto bad_time;
          VAR_21 = VAR_12;
          VAR_18 = VAR_14;
          break;

        case 'd': case 'D':
          if (VAR_18 >= VAR_1)
            goto bad_time;
          VAR_21 = VAR_8;
          VAR_18 = VAR_1;
          break;

        case 'h':
          if (VAR_18 >= VAR_3)
            goto bad_time;
          VAR_21 = VAR_9;
          VAR_18 = VAR_3;
          break;

        case 'm':
          if (VAR_18 >= VAR_4)
            goto bad_time;
          VAR_21 = VAR_10;
          VAR_18 = VAR_4;
          break;

        case 's':
          VAR_21 = 1;
          VAR_18 = VAR_7;
          break;
        }

      VAR_19 = FUNC_3 (VAR_19, VAR_20, VAR_21);

      VAR_17++;
      while (FUNC_1 ((unsigned char)*VAR_17))
        VAR_17++;
      if (*VAR_17 == 128)
        return VAR_19;

      if (! FUNC_0 ((unsigned char)*VAR_17))
        break;
    }

  } while (VAR_18 < VAR_7);

 bad_time:
  VAR_16 = VAR_2;
  return VAR_0;
}
